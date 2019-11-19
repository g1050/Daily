#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    ifstream in("test2.txt");
    if(!in){
        cout << "error" << endl;
        exit(-1);
    }

    string tmp;
    string name;
    string num1;
    string num2;
    while(getline(in,tmp)){
        istringstream istr;
        istr.str(tmp);
        cout << istr.str() << endl;
        istr >> name;
        istr >> num1;
        istr >> num2;

        cout << "name " << name << endl;
        cout << "num1 " << num1 << endl;
        cout << "num2 " << num2 << endl;
    }
    return 0;
}

