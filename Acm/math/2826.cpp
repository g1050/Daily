#include <iostream>
#include <string>
using namespace std;
const int MAXN = 1e9+7;
int main()
{   
    char a;
    int n;
    cin >> n;
    cin >> a; 
    string s;
    getline(cin , s);
    /* cout << s << endl; */
    int ans = 0;
    for(int i = 0;i<(int)s.size();i++){
        if(s[i] == ' '){
            s.erase(i,1);
            i--;
        } 
    }
    /* cout << s << endl; */
    for(int i = 0;i< (int )s.size();i++){
        /* cout << s[i] << endl; */
        ans = (int )(((long long )ans*10 + s[i] - '0') %MAXN);
    }
        
    cout << ans << endl;
        
        return 0; 
}

