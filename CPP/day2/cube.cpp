#include <iostream>
using namespace std;

class Cube
{
public:
    void setA(int a){
        this->a = a;
    }
    void setB(int b){
        this->b = b;
    }
    void setC(int c){
        this->c = c;
    }

    void setABC(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }

    int getV(){
        this->v = a*b*c;
        return this->v;
    }

    int getS(){
        s = (a*b)+(a*c)+(b*c);
        s *= 2;
        return s;
    }

    bool JudgeCUbe(Cube &v2)
    {
        if(this->getV() == v2.getV())
            return  true;
        else return false;
    }



private:
    int a;
    int b;
    int c;
    int v;
    int s;
};

//借助全局函数判断
bool JudgeCUbe(Cube &v1,Cube &v2)
{
    if(v1.getV() == v2.getV())
        return  true;
    else return false;
}

int main()
{
    Cube v1,v2;
    v1.setABC(1,2,3);
    v2.setABC(1,2,3);
    
    if(v1.JudgeCUbe(v2)){
        cout << "The Cube is same" << endl;
    }else{
        cout << "The Cube is different" << endl;
    }

    
    cout << "s = " << v1.getS() << endl;
    cout << "v = " << v1.getV() << endl;
    return 0;
}

