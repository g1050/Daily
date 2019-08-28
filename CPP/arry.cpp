#include <iostream>
#include <string>
using namespace std;
int main()
{
    int cnt ;
    cout << "请输入数组元素的个数" ;
    cin >> cnt;

    int *x = new int[cnt];//动态申请内存
    for(int i = 0;i<cnt;i++){
        x[i] = i*10;//基地址加偏移
    }

    for(int i = 0;i<cnt;i++){
        cout << x[i] << "\n";
    }

    delete [] x;
    
    for(int i = 0;i<cnt;i++){
        cout << x[i] << "\n";
    }
    return 0;
}

