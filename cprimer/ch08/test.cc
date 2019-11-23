#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("test.txt");

    while(!in.eof()){
        char ch = in.get();
        cout << ch ;
        if(ch == '!') cout << "\n";
    }

    in.clear();
    in.seekg(ios::beg);
    while(!in.eof()){
        char ch = in.get();
        cout << ch ;
        if(ch == '!') cout << "\n";
    }

    return 0;
}

