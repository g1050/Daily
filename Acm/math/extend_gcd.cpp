#include <iostream>
using namespace std;


long long extend_gcd(long long a,long long b,long long &x,long long &y)
{
    if(!a && !b) return -1;//无最大公约数
    
    if(!b){
        x = 1;
        y = 0;
        return a;
    }else{ 
        long long d = extend_gcd(a,a%b,y,x);
        y -= a/b * x;
        return d;
    }
}

void gcd(int a,int  b,int &d,int &x,int &y)
{
    if(!b){
        d = a;
        x = 1;
        y = 0;
    }else{
        gcd(b,a%b,d,y,x);
        y -= x *(a/b);
    }
}

int main()
{
    int x,y,d;
    /* long long x,y; */
    /* long res = extend_gcd(6,15,x,y); */
    gcd(6,15,d,x,y);
    /* cout << "res = " << res << endl; */
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "d = " << d << endl;
    return 0;
}

