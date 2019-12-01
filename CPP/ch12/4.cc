#include <iostream>
#include <memory>
using namespace std;

void f(shared_ptr<int> p)
{
    cout << *p << endl;
    shared_ptr<int> q(p.get());//此处q和p独立引用计数为1
    //函数return后q释放，q指向的空间也会释放.
    
    return ;
}

int main()
{
    auto p = make_shared<int>(10);
    f(p);
    cout << *p << endl;
    return 0;
}

