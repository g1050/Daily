#include <iostream>
using namespace std;

class Car
{
public:
    string color;
    string engine;
    float gas_tank;
    int wheel;

    void fill_tank(float liter);
    void runnning();
};

void Car::fill_tank(float liter)
{
    gas_tank = liter;
    return ;
}

void Car::runnning()
{
    cout << "Car is runnning!" << endl;
}

int main()
{
    Car mycar;
    mycar.fill_tank(85);
    mycar.runnning();
    /* mycar.gas_tank = 85; */
    cout << mycar.gas_tank << endl;
    return 0;
}

