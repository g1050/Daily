#include <iostream>
using namespace std;

class Test
{
    public:
        int x;
    private:
        int a,b;
};
int main()
{
    int *p = new int(30);
    /* *p = 20; */
    cout << "new int = " << *p << endl;

    char *p2 = new char[10];
    *p2 = 'A';
    cout << " *p2 =- " << p2[0];
    delete []p2;

    Test *t = new Test;
    t->x = 10;
    cout << "t->x = "<< t->x <<  endl;
    delete p;
    delete t;
    return 0;
}

