#include <iostream>
using namespace std;
class Teacher 
{
public:
    Teacher(int age){
        this->age = age;
    }
    int GettAge(){
      return age;  
    }
    friend void ChangeAge(Teacher *ptr);
private:
    int age;
protected:

};

void ChangeAge(Teacher *ptr)
{
    ptr->age = 35;
}
int main()
{
    Teacher t(30);
    cout << "age = " << t.GettAge() << endl;
    ChangeAge(&t);
    cout << "age = " << t.GettAge() << endl;
    
    return 0;
}

