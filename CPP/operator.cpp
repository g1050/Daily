#include <iostream>
using namespace std;
class Test
{
public:
    int operator() (int a,int b){
        return a*a+b*b;
    }
private:

};
int main()
{
    Test T;
    cout << T(2,4) << endl;
    return 0;
}

