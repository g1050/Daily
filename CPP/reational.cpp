#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class Rational
{
public:
    Rational(int num,int denom); //num 分子 denmo 分母 构造函数

    Rational operator+(Rational rhs);//right hand sides
    Rational operator-(Rational ths);
    Rational operator*(Rational ths);
    Rational operator/(Rational ths);
    
    void print();

private:
    void normalize(); //约分处理

    int numerator;//分子
    int denomiator;//分母

    friend ostream& operator << (ostream &os,Rational f);
};

ostream& operator<<(ostream& os,Rational f)
{
    os << f.numerator << " / " << f.denomiator;
    return os;
}

Rational::Rational(int num,int demo)
{
    numerator = num;
    denomiator = demo;

    normalize();
}

void Rational::normalize()
{
    //确保分母为正数
    if(denomiator < 0 ){
        denomiator = -denomiator;
        numerator  = -numerator;
    }

    //利用欧几里得算法约分
    int gcd = __gcd(denomiator,numerator);
    denomiator /= gcd;
    numerator /= gcd;

    return ;
}

void Rational::print()
{
    if(numerator % denomiator == 0)
        cout << numerator / denomiator ;
    else 
        cout << numerator << " / " << denomiator;
}

Rational Rational::operator+(Rational rhs)
{
    int a = numerator;
    int b = denomiator;
    int c = rhs.numerator;
    int d = rhs.denomiator;
    
    int e = a*d + c * b;
    int f = b*d;

    return Rational(e,f);
}

Rational Rational::operator-(Rational rhs)
{
    rhs.numerator = -rhs.numerator;
    return operator+(rhs);
}

Rational Rational::operator*(Rational rhs)
{
    int a = numerator * rhs.numerator;
    int b = denomiator * rhs.denomiator;

    return Rational(a,b);
}

Rational Rational::operator/(Rational rhs)
{
    int tmp = rhs.numerator;
    rhs.numerator = denomiator;
    denomiator = tmp;

    return operator*(rhs);
}

int main()
{
    Rational x(1,4);
    Rational y(1,2);
    /* Rational f1 = x + y; */
    cout << x+y;
    return 0;
}

