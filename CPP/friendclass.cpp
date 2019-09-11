#include <iostream>
using namespace std;
class A
{
    friend class B;
public:
    int GetX(){
        return x;
    }
private:
    int x;
};

class B
{
public:
A ob;
void SetX(int x){
    ob.x  = x;    
}
private:
};
int main()
{
    B b1;
    b1.SetX(10);
    cout << b1.ob.GetX() << endl;
    return 0;
}

