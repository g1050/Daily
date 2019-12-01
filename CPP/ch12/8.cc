#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    
    int *p = new int[size];

    for(int *q = p;q != p+size;q++){
        cin >> *q;
    }


    for(int *q = p;q != p+size;q++){
        cout << *q;
    }

    delete[] p;
    return 0;


}

