#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        string address;
    public:
        string getName(){
            return name;
        }
        string getAddress(){
            return address;
        }
};

int main()
{
    return 0;
}

