#include <iostream>
using namespace std;
class Test
{
public:
    Test(int a,int b){
        cout << "调用构造函数" << endl;
        this->a = a;
        this->b = b;
    }
    
    Test(Test &ob){
        cout << "调用拷贝构造函数" << endl;
        a = ob.a;
        b = ob.b;
    }
private:
    int a,b;
};

void f(Test t3)
{
    return ;
}
int main()
{
    Test t(1,4);//执行构造函数创造对象t
    cout << "执行构造函数创造对象t" << endl;
    cout << "----------------" << endl;
    cout << "① 用t给t1赋值时候调用拷贝构造函数" << endl;
    Test t1 = t;
    cout << "----------------" << endl;
    cout << "② 用一个对象t初始化另一个对象t2" << endl; //类似隐式执行构造函数
    Test t2(t);
    cout << "----------------" << endl;
    cout << "③ 实参t初始化形参t3" << endl;
    f(t);
    cout << "----------------" << endl;
    return 0;
}

