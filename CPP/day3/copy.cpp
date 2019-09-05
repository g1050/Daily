#include <iostream>
#include <cstring>
using namespace std;
//默认的拷贝构造函数是浅拷贝
//默认的=操作符也是浅拷贝
class Test
{
public:
    Test(char *str){
        len = strlen(str);
        p = (char*)malloc(len);
        strcpy(p,str);
    }

    //手动编写构造函数
    Test(Test &ob){
        int len = ob.len;
        p = (char*)malloc(len);
        strcpy(p,ob.p);
    }

    ~Test(){
        if(p != NULL){
            free(p);
            p = NULL;
            len = 0;
        }
    }

    void printp();

private:
    int len;
    char *p;
};


//构造函数初始化列表
class Test2
{
public:
    Test2(){
        cout << "Test2构造函数" << endl;
    }
};
void Test::printp()
{
    cout << p << endl;
}

//深拷贝需要自定义拷贝函数
int main()
{
    Test t1("abcde");
    Test t2 = t1;
    t1.printp();
    t2.printp();
    return 0;
}

