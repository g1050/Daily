#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <queue>
#include <map>
using namespace std;

const int MAX = 1000;
int main()
{
    while(1){
        map <int, int > mp;
        vector <int > v;
        vector <int > a[MAX];
        queue <int > q;
        int n,m,x,y;
        cin >> n >> m;
        if(!n) break;
        
        int inn[n+10];
        memset(inn,0,sizeof(inn));
        
        for(int  i = 0;i<m;i++){
            cin >> x >> y;
            a[x].push_back(y);
            inn[y]++;
        }
        
        for(int i = 0;i<n;i++)
            if(!inn[i]){//入度为0的节点加入到队列中去
                q.push(i);
            }

        while(!q.empty()){
            int front = q.front();
            q.pop();
            v.push_back(front);
            for(int i = 0;i<(int)a[front].size();i++){
                if(--inn[a[front][i]] == 0)
                    q.push(a[front][i]);
            }
        }

        if((int)v.size() == n) cout << "YES\n";
        else cout << "NO\n" ;
    }
    return 0;
}

