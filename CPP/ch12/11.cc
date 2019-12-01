#include <iostream>
#include <memory>
using namespace std;


class Type
{
public:
    int a;
    Type(int c,int b){
        a = -2;
        cout << "执行了有参构造函数" << endl;
    }
    Type(){
        a = -1;
        cout << "执行构造函数" << endl;
    }
    ~Type(){
        cout << "执行析构函数" << endl;
    }
};

int main()
{
    allocator<Type> a;//定义了一个存储类型为int，变量名字为a的allocator对象
    Type *p = a.allocate(5);//分配５个未初始化，未构造的函数
    auto q = p;
    a.construct(q);//只构造了一个
    cout << q->a << endl;
    q++;
    a.construct(q,1,2);

    cout << q->a << endl;

    a.destroy(q);//对p所指向的对象执行析构函数

    a.deallocate(p,5);//释放从p开始的内存，该内存中保存了n个类型为int的变量
    //对p n的要求:p 必须是allocacte返回的指针，n必须是初始时候分配的大小n
    //调用deallocate之前必须destory    
    
    return 0;
}

