#include <iostream>
#include <vector>
using namespace std;
 
vector <int> v ;
int main()
{
    int tmp;
    for(int i = 0;i<10;i++){
        cin >> tmp;
        v.push_back(tmp);
    }
        
    for(vector<int>::iterator it = v.begin();it != v.end();it++){
        *it *= 2;
        cout << *it << " ";
    }
    cout << "\n";
    return 0;
}

