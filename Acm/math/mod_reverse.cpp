#include <iostream>
using namespace std;

long long extend_gcd(long long a,long long b,long long &x,long long &y)
{
    if(a == 0 && b == 0) return -1;//无最大公约数
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    long long d = extend_gcd(b,a%b,y,x);
    y -= a/b*x;
    return d;
}

long long mod_reverse(long long a,long long n)
{//a关于模n的逆
    long long x,y;
    long long d = extend_gcd(a,n,x,y);
    if(d == 1) return (x%n+n)%n;
    else return -1;
}
int main()
{
    long long x,y;
    long long res = extend_gcd(6,15,x,y);

    cout << "res = " << res << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    cout << "逆元 = " << mod_reverse(5,6) << endl;
    
    return 0;
}

