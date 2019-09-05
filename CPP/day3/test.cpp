#include <iostream>

using namespace std;
class Test
{
public:
    Test(int a = 0, int b = 0){
        this->a = a;
        this->b = b;
    }
    Test(const Test &ob){
        a = ob.a;
        b = ob.b;
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
    Test t(1,2);
    return t;
}

int main()
{
    Test t = f();

    return 0;
}

