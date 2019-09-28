#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
const int MAX = 1000;
int main()
{
    priority_queue<int ,vector<int > ,greater<int > > q;
    vector <int > v[MAX];
    vector <int > ans;
    string s;
    int n = -1;
    int in[MAX];
    memset(in,0,sizeof(in));
    while(getline(cin,s)){
        int size = s.size();
        for(int i = 0;i<size;i++){
            int x,y;
            if(s[i] == ' ') continue;
            else{
                int num = s[i]-48;
                if(num > n) n = num;
                if(i == 0) y = num;
                else x = num; 
            }
            
            if(i != 0){
                 v[x].push_back(y);
                 in[y]++;         

            }
        }
    }

    /* cout << n << endl; */
    for(int i = 1;i<n;i++){
        if(!in[i]) q.push(i);
    }

    while(!q.empty()){
        int tmp = q.top();
        ans.push_back(tmp);
        q.pop();

        for(int i = 0;i<(int)v[tmp].size();i++){
            if(--in[v[tmp][i]] == 0) q.push(v[tmp][i]);
        }
    }

    for(int i = 0;i < (int)ans.size();i++){
        if(i) cout << " ";
        cout << ans[i] ;
    }
    
    cout << "\n";
    return 0;
}

