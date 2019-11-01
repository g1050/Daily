#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        string address;
    public:
        Person():name("Jack"),address("china"){}
        Person(istream &is){
            is >> name >> address;
        }
        string getName(){
            return name;
        }
        string getAddress(){
            return address;
        }
        void print();
        friend void fun(Person q);//友元函数

};

void fun(Person q)
{
    cout << q.name << endl;
}

void Person::print()
{
    cout << "name = " << name;
    cout << "address = " << address;
    return ;
}

int main()
{
    Person p(cin);
    cout << p.getName() << endl;
    cout << p.getAddress() << endl;
    fun(p);
    return 0;
    
}

