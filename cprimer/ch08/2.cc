#include <iostream>
using namespace std;
int main()
{
    int a ;
    cin >> a; 
    auto old_state = cin.rdstate();

    if(cin.good()){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    cin.clear();
    
    if(cin.good()){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    cin.setstate(old_state);
    
    if(cin.good()){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }



    return 0;
}

