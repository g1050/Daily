#include <iostream>
#include <map>
#include <cstdlib>
#include <cstring>
#include <set>
#include <unistd.h>
using namespace std;
set <int > s;
const int MAXN = 10000;
int prime[MAXN+1];
void getPrime()
{
    memset(prime,0,sizeof(prime));
    for(int i =2;i<=MAXN;i++){
        if(!prime[i]) {
            prime[++prime[0]] = i;
            s.insert(i);
            /* cout << i << endl; */
            /* sleep(1); */
        }
        for(int j = 1;j<= prime[0] && prime[j] <= MAXN/i;j++){
            prime[prime[j]*i] = 1;
            if(i%prime[j] == 0) break;
        }    
    }
}
int main()
{
    int n,k;
    int flag = 1;
    cin >> n >> k;
    getPrime();
    for(int i = 2;i<=n-k;i++){
        if(s.count(i) && s.count(i+k)){
            cout << i << " " << i+k << "\n";
            flag = 0;
        }
    }
    if(flag) cout << "empty" ;
    return 0;
}

