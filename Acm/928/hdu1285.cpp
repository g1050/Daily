#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
struct node
{
    int data;
    int pos;
};
struct cmp
{
    bool operator() (int &a,int &b){
        return a > b;
    }
};
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n,m;
    cin >> n >> m;
    int in[500+10];
    vector <int > ans;
    priority_queue <int,vector <int > > q;
    vector <int > v[4000+10];
    //需要改为优先队列
    memset(in,0,sizeof(in));
    for(int i = 0;i<m;i++){
        int x,y;
        cin >> x >> y;
        v[y].push_back(x);//逆拓扑排序
        in[x]++;
        /* cout << y << ": " << in[y] << endl; */ 
    }
        for(int i = 1;i<=n;i++){
            if(!in[i]){
                q.push(i);
            }
        }

        while(!q.empty()){
            int front = q.top();
            ans.push_back(front);
            q.pop();

            for(int i = 0;i<(int)v[front].size();i++){
                if(--in[v[front][i]] == 0) q.push(v[front][i]);
            }
        }


        if((int)ans.size() != n) cout << -1 ;
        else{

            int res[500+10];
            for(int i = 0;i<n;i++){
                res[ans[i]] = n-i;
                /* cout << ans[i]  <<  " "; */
            }

            for(int i = 1;i<=n;i++){
                if(i != 1) cout << " ";
                cout << res[i];
            }

        }

        cout << "\n";
    }
    return 0;
}

