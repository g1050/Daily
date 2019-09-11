#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(int x = 0,int y = 0){
        reall = x;
        img = y;
    }

    void print(){
        cout << reall << "+"  << img << "i\n" ;
    }

    //成员函数实现运算符重载
    Complex operator+(Complex &ob){
        return Complex(this->reall+ob.reall,this->img+ob.img);
    }
    int reall;
    int img;
private:
};

/* //全局函数 */
/* Complex operator+(Complex c1,Complex c2){ */
/*     Complex c3(c1.reall+c2.reall,c1.img+c2.img); */
/*     return c3; */
/* } */


int main()
{
    //运算符重载就是一个函数
    Complex c1(1,2),c2(1,3);
    Complex c3;
    c3 = c1 + c2;
    c3.print();
    return 0;
}

