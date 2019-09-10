#include <iostream>
using namespace std;
struct Teacher 
{
    int age;
    char name[64];
};
int getTeacher(Teacher **p)
{
    Teacher *tmp = NULL;
    if(p == NULL){
        return -1;
    }
    
    tmp = (Teacher*)malloc(sizeof(Teacher));
    if(tmp == NULL){
        return -2;
    }

    tmp->age = 33;
    *p = tmp;
    return 0;
}

//c++中指针的引用
int getTeacher2(Teacher * &myp)
{
    myp = (Teacher*)malloc(sizeof(Teacher));
    myp->age = 36;
    return 0;
}
int main()
{
    Teacher t1;
    t1.age = 25;
    
    Teacher *pt1;
    getTeacher(&pt1);
    getTeacher2(pt1);
    cout << pt1->age << endl;
    return 0;
}

