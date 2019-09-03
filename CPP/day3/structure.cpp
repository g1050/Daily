#include <iostream>
using namespace std;

class Test
{
public:
    Test(){
        a = 10;
        p = (char*)malloc(100);
        cout << "malloc申请100字节空间" << endl;
        cout << "构造函数" << endl;
    }
    ~Test(){//析构的时候先创建的对象后释放
        free(p);
        cout << "free释放空间" << endl;
        cout << "析构函数" << endl;
    }

    Test(Test &ob){
        a = ob.a + 100;
        cout << "拷贝构造函数" << endl;
        cout << "a = " << a << endl;
    }

private:
    int a;
    char *p;
};

int main()
{
    Test t1;
    Test t2(t1);

    return 0;
}

