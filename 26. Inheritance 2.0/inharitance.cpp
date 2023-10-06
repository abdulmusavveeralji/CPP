#include <iostream>
using namespace std;

class Base
{
    int data;

public:
    int a;
    void setData();
    int getData();
    int getA();
};
void Base::setData()
{
    data = 2;
    a = 3;
}

int Base::getData()
{
    return data;
}
int Base::getA()
{
    return a;
}

class Derived : public Base
{
    int b;

public:
    void process();
    void display();
};

void Derived::process()
{
    b = a * getData();
}

void Derived::display()
{
    cout << "value of data is " << getData() << endl;
    cout << "value of a is " << a << endl;
    cout << "value of b is " << b << endl;
}

int main()
{
    Derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}