#include <iostream>
using namespace std;
class Test{
public:
    int a;
    int b;

    Test(){

    }

    /* ~Test(){ */
    /*     cout << "析构函数" << endl; */
    /* } */

    Test(Test &t){
        cout << "调用了拷贝构造函数" << endl;
    }
};

Test f(Test t){
    Test t1;
    return t1;
}

int main()
{

    Test  t1;
    /* Test t2 = t1; */

    f(t1);
    /* Test t3 = f(); */
    return 0;

}

