#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> sp = make_shared<int>(10);
    weak_ptr<int> p1;//定义一个指针
    weak_ptr<int> p2(sp);//用shared_ptr来初始化一个指针
    weak_ptr<int> p3;

    p3 = sp;
    p3 = p2;//用shared_ptr来赋值或者用weak_ptr来赋值都可以

    p2.reset();//将p2置为空  
    p2.use_count();//返回有多少个shared_ptr共享该对象
    p3.expired();//判断shared_ptr指针是否过期

    p3.lock();//如果还有shared_ptr指向对象则返回一个shared_ptr与原来的共同指向一个对象,否则返回一个空的shared_ptr
    //无则返回空，有则返回一个指向w对象的shared_ptr
    

    if(shared_ptr<int> np = p3.lock()){
        //还可以找到这个对象表示可以继续使用
    }

    return 0;
}

