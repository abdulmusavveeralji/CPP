#include <iostream>
using namespace std;

// forward declartion
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumComplex(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    // we can individually declare funcations as friend as below line,
    // or i can also make entire calculator class as friend
    friend int Calculator ::sumComplex(Complex, Complex);
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void printNumber()
    {
        cout << "Value of a is " << a << " and value of b is " << b << endl;
    }
};

int Calculator ::sumComplex(Complex a, Complex b)
{
    return (a.a + b.a);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 2);
    o1.printNumber();
    o2.setNumber(3, 4);
    o2.printNumber();

    Calculator c1;
    cout << "Calculator Sum is " << c1.add(1, 4) << endl;
    cout << "Sum of complex is " << c1.sumComplex(o1, o2) << endl;
    return 0;
}