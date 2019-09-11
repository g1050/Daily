#include <iostream>
#include "array.h"
using namespace std;
int main()
{
    Array a(10);
    for(int i = 0;i<10;i++){
        a.SetData(i,i);
    }

    for(int i = 0;i<10;i++){
        cout << "i = " << a.GetData(i) << endl;;
    }

    cout << "length = " << a.size() << endl;
    return 0;
}

