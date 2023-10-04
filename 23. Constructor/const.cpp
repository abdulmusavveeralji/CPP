#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A();
    void print()
    {
        cout << "Value of a is " << a << " and value of b is " << b << endl;
    }
};

A ::A()
{
    a = 20;
    b = 10;
}
int main()
{
    A a;
    a.print();
    return 0;
}

// You know we can overload constructor with different parameters
