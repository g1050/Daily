#include <iostream>
using namespace std;
/* const long long int  M = 10000000000; */
/* int a[M]; */
typedef long long ll;
ll a,b,c,d,e,f,g,h;
ll Min;
ll Max;
ll sum;
ll getnum(int j)
{
    
}

int main()
{
    ll t;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        cin >> e >> f >> g >> h;

        ll ans = 0;

        sum = (b-a+1)*(d-c+1)*(f-e+1);
        cout << "sum "<< sum << endl;

        Min = a+c+e;
        
        cout << "Min" << Min << endl;
        Max = b+d+f;
        cout << "Max" << Max << endl;

        for(int j = g;j<=h;j++){
            ans += getnum(j+1);
        }
    }
    
    return 0;
}

