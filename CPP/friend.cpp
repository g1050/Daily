#include <iostream>
using namespace std;

class Lovers
{
public:
    Lovers(string thename);
    void kiss(Lovers *lover);
    void ask(Lovers *lover,string something);
protected:
    string name;
    friend class Others;
};

class Boyfriend: public Lovers
{
public:
    Boyfriend(string thename);
};

class GirlFriend: public Lovers
{
public:
    GirlFriend(string thename);
};

class Others
{
public:
    Others(string thename);
    void Kiss(Lovers *lover);
protected:
    string name;
};

Others::Others(string thename)
{
    name = thename;
}

void Others::Kiss(Lovers *lover)
{
    cout << name << " kissed " << lover->name << endl; 
}
Lovers::Lovers(string thename)//Lovers构造函数
{
    name = thename;
}

void Lovers::kiss(Lovers *lover)
{
    cout << name << " kiss " << lover->name << endl;
}

GirlFriend::GirlFriend(string thename) :Lovers(thename)
{

}

Boyfriend::Boyfriend(string thename) :Lovers(thename)
{

}

int main()
{
    Boyfriend boyfriend("Man A");
    GirlFriend  girlfriend("Girl B");//构造函数

    Others others("Stranger C");

    girlfriend.kiss(&boyfriend);
    boyfriend.kiss(&girlfriend);

    others.Kiss(&girlfriend);
    return 0;
}

