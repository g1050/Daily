#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string str = "Hello world!";

istream& f(istream &in){
        
    string tmp;
    in >> tmp;
    cout << tmp << endl;
    in.clear();//对流进行复位使其处于有效状态
    return in;
}

int main()
{
    f(cin);
    return 0;
}

