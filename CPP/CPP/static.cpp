#include <iostream>
using namespace  std;
class BB
{
public:
    int getc(){
        return c;
    }
    void addc(){
        c = c+1;
    }
protected:
private:
    int a;
    int b;
    static int c;//变量属于公用的在这类里面米

};
int BB::c = 10;
int main()
{
    BB b1,b2;

    cout << "c =" << b1.getc() << endl;
    b2.addc();
    cout << "c =" << b1.getc() << endl;
    return 0;
}

