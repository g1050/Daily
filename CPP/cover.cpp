#include <iostream>
using namespace std;
class Animal
{
public:
    void eat();
    void sleep();
    void drool();
};

class Turtle:   public Animal
{
public:
    void eat();
    void eat(int num);
};

void Animal::eat()
{
    cout << "Animal is eating!" << endl;
    return ;
}

void Turtle::eat()
{
    Animal::eat();
    cout << "Turtle is eating!" << endl;
    return ;
}

void Turtle::eat(int num)
{
    cout << "I am eating" << num << "!" << endl;
    return ;
}

int main()
{
    Turtle turtle;
    turtle.eat(100);
    return 0;
}

