#include <iostream>
using namespace std;

class Point;//声明point类i

class Circle
{
public:
    Circle(int x,int y,int r){
        this->x = x;
        this->y = y;
        this->r = r;
    }
    bool Judge(Point &point);
private:
    int x;
    int y;
    int r;

};

class Point
{
public:
    Point(int x,int y){
        this->x = x;
        this->y = y;
    }
    int x,y;
private:
};

bool Circle::Judge(Point &point)
{
    if((point.x - x)*(point.x - x) + (point.y - y)*(point.y - y) <= r*r ){
        cout << "Point is in the circle" << endl;
        return true;
    }else{
        cout << "POint is outof the Circle" << endl;
        return false;
    }
}


int main()
{
    Circle c1(1,1,1);
    Point point(1,2);
    c1.Judge(point);
    return 0;
}

