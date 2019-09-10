#include <iostream>
using namespace std;
//函数重载和指针
void func(int a)
{
    cout << "func1" << endl;
}

void func(char *p)
{
    cout << "func2" << endl;
}

void func(int a,int b)
{
    cout << "func3" << endl;
}

//声明一个函数指针类型
typedef void (myfunc)(int a,int b);

//声明一个指针的数据类型
typedef void (*myFunc)(int a,int b);

//直接定义一个变量
void (*myVarfunc)(int a,int b);

int main()
{
    //定义一个函数指针，指针指向函数的入口地址
    myfunc *p1 = func ;
    p1(1,2);
    //根据参数自动匹配是哪一个函数
    //参数个数必须与声明时候一致
    return 0;
}

