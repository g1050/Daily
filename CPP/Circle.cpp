#include <iostream>
using namespace std;
#define PI 3.14


//面向过程的方法求解
int main2()
{
    int  r;
    cout << "请输入圆的半径i:";
    cin >> r;
    cout << "圆的面积是:" << PI*r*r << endl;
    return 0;
}


class Circle 
{
public:
    int a = 1;
    int c = 0;
    int b = c;
    Circle(double r){
        this->m_r = r;
    }
    double getarea(){
        m_s = PI*m_r*m_r;
        return m_s;
    }
    double getr(){
        return m_r;
    }
private:
    double m_s;
    double m_r;
};

//类的调用的执行过程
//
//面向对象的方法求解
int main()
{
    Circle c(2);//分配内存
    cout << "半径为" << c.getr() << "的圆形的面积为:" << c.getarea() << endl;
    cout << c.b << endl;
    return 0;
}

