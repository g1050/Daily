#include <iostream>
#include <memory>
using namespace std;

int main()
{
    //为了使用shared_ptr必须提供一个删除器.
    shared_ptr<int> sp(new int[5](),[](int *p){delete p; cout << "调用了自定义删除器" << endl;});

    //shared_ptr不能通过下标和指针运算符来访问
    for(size_t i = 0;i < 5;i++){
        cout  << *(sp.get() + i);//只能通过这么一种方式来访问
    }


    sp.reset();//使用我们提供的删除器删除数组

    
    return 0;
}

