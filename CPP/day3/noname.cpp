#include <iostream>

using namespace std;
class Test
{
public:
    Test(int a = 0, int b = 0){
        cout << "执行了构造函数" << endl;
        this->a = a;
        this->b = b;
    }
    Test(const Test &ob){
        cout << "执行了拷贝构造函数" << endl;
        a = ob.a;
        b = ob.b;
    }
    Test( Test &&ob){
        a = ob.a;
        b = ob.b;
        ob.a = 0;
        ob.b = 0;
    }
    Test() = delete ;
     Test operator = (Test &&ob){cout << "one\n";}
     Test operator = (const Test &ob){cout << "two\n";}
     Test operator = (const Test &&ob) {cout << "three\n";}
    ~Test(){
    }

private:
    int a;
    int b;
};

Test f()
{
    cout << "hell\n";
    Test t(1,2);
    cout << "g\n";
    return t;
}

void g1()
{
    f();
}

template <typename T>
void judge(T tmp)
{
    if(std::is_lvalue_reference<T>::value){
        cout << "lvalue\n";
    }else if(std::is_rvalue_reference<T>::value){
        cout << "rcalue\n";
    }else if(std::is_integral<T>::value){
        cout << "intergral\n";
    }else {
        cout << "others\n";
    }
}

void g2()
{
    // auto c = f();
    Test t1(f());
   // judge(f());
    //Test t1 = c;
    //Test t1 = static_cast<Test &&>(f());
}

void g3()
{
    Test t2(1,4);
    t2 = f();
}
int main()
{
    cout << "② 返回匿名对象用来初始化" << endl;
    g2(); 

    return 0;
}

