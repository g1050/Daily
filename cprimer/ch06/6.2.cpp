#include <iostream>
#include <string>
using namespace std;
bool ifBig(const string &s)
{
    for(int i = 0;i<(int)s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            return true;
    }
    return false;
}

void toBig(string &s)
{
    for(int i = 0;i<(int)s.size();i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    return ;
}
int main()
{
    string s;
    cin >> s;
    if(ifBig(s)){
        std::cout << "含有大写字母\n";
    }else{
        std::cout << "含有大写字母\n";
    }

    toBig(s);
    cout << s;
    return 0;
}

