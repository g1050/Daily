#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;
const int MAXN = 10000;
const int MAXN2 = 1000000+10;
int prime[MAXN+1];//用来存储晒出来的素数
bool notprime[MAXN2];
int prime2[MAXN2];
void getPrime()
{
    memset(prime,0,sizeof(prime));

    for(int i = 2;i<MAXN;i++){
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j = 1;j <= prime[0] && prime[j] <= MAXN/i;j++){
            prime[prime[j] * i] = 1;
            if(i%prime[j] == 0) break;
        }
    }
}

void getPrime2(int l,int r)
{
    memset(notprime,false,sizeof(notprime));
    if(l < 2) l = 2;
    for(int i = 1;i<=prime[0] && (long long)prime[i]*prime[i] <= r;i++){
        int s = l/prime[i] + (l%prime[i] > 0);
        if(s == 1) s = 2;
        for(int j = s;(long long )j * prime[i] <= r;j++){
            if((long long ) j* prime[i] >= l){
                notprime[j*prime[i]-l] = true;
            }
        }
    }

    prime2[0] = 0;
    for(int i = 0;i<=r-l;i++){
        if(!notprime[i])
            prime2[++prime2[0]] = i+l;
    }
}
int main()
{
    getPrime();
    int l,r;
    while(cin >> l >> r){
        getPrime2(l,r);
        if(prime2[0] < 2) cout << "There are no adjacent primes.\n";
        else{
            int x1 = 0,x2 = 100000100,y1 = 0 ,y2 = 0;
            for(int i = 1;i<prime2[0];i++){
                /* cout << i << " " << prime2[i] << "\n"; */
                if(prime2[i+1] - prime[i] < x2 - x1){
                    x1 = prime2[i];
                    x2 = prime2[i+1];
                }
                if(prime2[i+1] - prime2[i] > y2 - y1){
                    y1 = prime2[i];
                    y2 = prime2[i+1];
                }
            }
            printf("%d,%d are closest, %d,%d are most distant.\n",x1,x2,y1,y2);
        }
    }

    /* for(int i = 1;i<=5;i++){ */
    /*     cout << prime[i] << endl; */
    /* } */

    return 0;
}

