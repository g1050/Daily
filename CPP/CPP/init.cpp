#include <iostream>
using namespace std;
class A 
{
public:
       A(int a,int b){
           this->a = a;
           this->b = b;
       }
       A(int a){
           this->a = a;
           this->b = 0;
       }
private:
    int a;
    int b;
};

class B
{
public:
    B():a1(1,2),a2(2){

    }
    
    int x,y;
private:
    A a1;
    A a2;
};
int main()
{
    B ob;
    return 0;
}

