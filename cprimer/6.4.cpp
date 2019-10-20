#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(auto it = s.begin();it != s.end() && *it != ' ';*it++){
        if(*it >= 'a' && *it <= 'z'){
            *it = *it - 32;
        }
    }
    
    cout << s << endl;
    return 0;
}

