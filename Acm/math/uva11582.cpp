#include <iostream>
using namespace std;
const int MAXN = 1000000+100;
typedef long long LL;

int pow_mod(LL a,LL n,LL m)
{
    if(n == 0) return 1;
    int x = pow_mod(a,n/2,m);
    long long ans = (long long)x*x%m;
    if(n%2 == 1) ans = ans*a%m;
    return (int)ans;
}

int main()
{
    int t;
    cin >> t;
    LL num[MAXN];
    while(t--){
        LL a,b,n;
        cin >> a >> b >> n;
        num[1] = 1;
        num[2] = 1;
        for(int i = 3;i<=n*n;i++){
            num[i] =(num[i-1]%n+num[i-2]%n)%n;
        }

        /* for(int i = 1;i<=n*n;i++){ */
        /*     cout << num[i] << endl; */
        /* } */
        
        int ans = pow_mod(a,b,n*n);
        /* cout << "ans = " << ans ; */
        cout << num[ans] << endl;
    }
    return 0;
}

