#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item book;
    while(cin >> book){
        cout << "ISBN sold price revenue" << endl;
        cout << book << endl;
    }
    return 0;
}

