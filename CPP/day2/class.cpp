#include <iostream>
using namespace std;
class MyTeacher
{
public:
    void setAge(int age);
    int getAge();
private:
    int m_age;
    char name[64];
protected:
};

void MyTeacher::setAge(int age)
{
    this->m_age = age;
    return ;
}
int main()
{
    return 0;
}

