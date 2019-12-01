#include <iostream>
#include "array.h"
using namespace std;
int main()
{
    Array a(10);
    for(int i = 0;i<10;i++){
        /* a.SetData(i,i); */
        a[i] = i;
        //运算符号重载
        //函数返回值当左值 引用
    }

    for(int i = 0;i<10;i++){
        cout << "i = " << a[i] << endl;//重载[]运算符号
    }

    cout << "length = " << a.size() << endl;
    return 0;
}

