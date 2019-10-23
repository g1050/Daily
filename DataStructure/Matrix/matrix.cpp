#include "matrix.h" 
using namespace std;

void Matrix::printMenu()
{
    cout << "[1]矩阵加法\n";
    cout << "[2]矩阵减法\n";
    cout << "[3]矩乘法法\n";
    cout << "[4]矩阵逆置\n";
    cout << "[5]退出\n";
}

TSMATRIX Matrix::inputMatrix()
{
    TSMATRIX in;
    cout << "矩阵行数:";
    cin >> in.row;
    cout << "矩阵列数";
    cin >> in.col;
    cout << "以三元组形式输入矩阵非零(row,col,value),输入0 0 0退出";
    int k = 0; 
    while(1){
        cin >> in.data[k].row ;
        /* if(!row && !col && !value){ */
            /* break; */
        /* } */
    }

    return in;
}
