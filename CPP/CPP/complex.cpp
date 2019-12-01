#include <iostream>
#include<ostream>


using namespace std;
class Complex
{
    friend ostream& operator<<(ostream &os,Complex d);
public:
    Complex();//构造器
    Complex(double r ,double l);//重载构造器
    Complex operator+(Complex &d);//返回值是一个Complex类型
    void print();

private:
    double real;
    double imag;

};

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double r,double l)
{
    real = r;
    imag = l;
}

Complex Complex::operator+(Complex &d)
{
    Complex c;//定义一个新的对象x
    c.real = this->real + d.real;
    c.imag = this->imag + d.imag;
    return c;
}

ostream& operator<<(ostream &os,Complex d)
{
    os << "result = ";
    d.print();

    /* printf("\n%p\n",&os); */
    return os;

}

void Complex::print()
{
    cout << "(" << real << "," << imag << "i)\n";
    return  ;
}



int main()
{
    Complex c1(3,4),c2(5,-10),c3;
    cout << "c1 = " ;
    c1.print() ;

    cout << "c2 = " ;
    c2.print();

    c3 = c1 + c2;
 //   cout << "c3 = ";
   // c3.print();
   //(cout << c3) << "asd ";
 //   printf("%p",&cout);
   /* cout << 3+5; */
    cout << c1+c2;
    return 0;
}



