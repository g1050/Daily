#include <iostream>
using namespace std;

class BaseClass
{
    public:
        BaseClass();//构造器
        ~BaseClass();//析构器
        void dosomething();
};

class SubClass:public BaseClass
{
public:
    SubClass();
    ~SubClass();
};

BaseClass::BaseClass()
{
    cout << "进入基类构造器" << endl;
    cout << "基类构造器..." << endl;
}

BaseClass::~BaseClass()
{
    cout << "进入基类析构器" << endl;
    cout << "基类析构器"     << endl;
}


void BaseClass::dosomething()
{
    cout << "I am doing something!" << endl;
    return ;
}

SubClass::SubClass()
{
    cout << "进入子类构造器" << endl;
    cout << "子类构造器" << endl;
}

SubClass::~SubClass()
{
    cout << "进入子类析构器" << endl;
    cout << "子类析构器" << endl;
}


int main()
{
    SubClass sub;
    sub.dosomething();

    cout << "It's over now!" << endl;
    return 0;
}

