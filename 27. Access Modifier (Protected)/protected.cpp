#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : Base
{
};
int main()
{
    Base b;
    Derived d;
    // cout << d.a << endl; // this wont work because protected variables only accessible in its derived class,

    return 0;
}