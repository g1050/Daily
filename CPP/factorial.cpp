#include <iostream>
#include <climits>
using namespace std;
class Factorial
{
public:
    Factorial(unsigned short num);
    unsigned long getFactorial();
    bool inRange();
private:
    unsigned short num;
};

Factorial::Factorial(unsigned short num)
{//构造函数
    this->num = num;
}

unsigned long Factorial::getFactorial()
{
    unsigned long sum = 1;;
    
    for(int i = 1 ; i <= num ;i++){
        sum *= i;
    }
    return sum;
}

bool Factorial::inRange()
{
    unsigned long max = ULONG_MAX;
    for(int i = num;i >= 1;i--){
        max /= i;
    }

    if(max >= 1) return true;
    else return false;
}

int main()
{
    unsigned short num = 0;
    cin >> num;
    Factorial f(num);
    if(f.inRange()){
        ;
    }else{
        cout << "Out of range\n" ;
        return 0 ;
    }
    unsigned long res = f.getFactorial();
    cout << "res = " << res << "\n";
    return 0;

}

