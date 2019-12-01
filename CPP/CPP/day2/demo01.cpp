#include <iostream>
using namespace std;

const double PI = 3.14;
//求圆的面积
class MyCircle
{
private:
    double m_r;
    double m_s;

public:
    double getR(){
        return m_r;
    }
    double setR(double r){
        this->m_r = r;
        return r;
    }
    double getS(){
        m_s = PI*m_r*m_r;
        return m_s;
    }
};
int main封装()
{
    MyCircle c1,c2;
    c1.setR(10);
    cout << c1.getS() << endl;
    return 0;
}

int main()
{
    MyCircle c1;
    /* c1.m_r = 10;//私有成员不能访问 */
    c1.setR(10);
}

