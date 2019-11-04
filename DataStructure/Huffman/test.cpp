#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Test
{
public:
    ifstream in;
    ofstream out;
};
int main()
{
    char ch;
    Test t;
    t.in.open("Hello.txt",ios::in | ios::binary);
    if(!t.in.is_open()){
        cout << "error" << endl;
    }
    while(t.in.peek() != EOF){
        ch = t.in.get();
        cout << ch ;
    }
    return 0;
}

