#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setid()
    {
        salary = 234;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getId()
    {
        cout << "the id of this employee is " << id << endl;
    }
};

class Complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex c1, Complex c2)
    {
        a = c1.a + c2.a;
        b = c2.b + c2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

void empClassExample()
{
    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getId();
    }
}
void complexClassExample()
{
    Complex a, b, c;
    a.setData(1, 2);
    b.setData(3, 4);

    c.setDataBySum(a, b);
    c.printNumber();
}
int main()
{
    // Employee a, b, c;
    // a.setid();
    // a.getId();
    // empClassExample();
    complexClassExample();
    return 0;
}