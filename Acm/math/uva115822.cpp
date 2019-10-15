// 计算 f(a^b) mod n, 其中 f(i) = f(i-1) + f(i-2), f(0) = f(1) = 1, 其中0 <= a, b < 2^64 , n <= 1000
#include <cstdio>
#include <iostream>
#include <cstring>
#include <set>
using namespace std;

#define MAXN 1007
typedef unsigned long long LL;
int f[MAXN*MAXN];

int fun( LL a, LL b, int n ) {
    LL ans = 1;
    a = a % n;
    while( b > 0 ) {
        if( b & 1 ) ans = ans * a % n;
        b /= 2;
        a = a * a % n;
        
    }
    return (int)ans;
}
int main() {
    LL a, b;
    int n;
    int t;
    cin >> t;
    while( t-- ) {
        cin >> a >> b >> n;
        memset( f, 0, sizeof(f) );
        f[0] = f[1] = 1;
        int i = 0;
        
        for( i = 2; i <= n * n; i++ ) {
            f[i] = ( f[i-1] % n + f[i-2] % n ) % n;
            /* cout << "i = " << f[i] << endl; */
        }

        int ans = fun(a,b,n);
        cout << "ans = " <<  ans << endl;
        cout << f[ans-1] << endl;
    }
    
}
