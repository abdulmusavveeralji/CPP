#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }

    friend Complex sumComplex(Complex c1, Complex c2);
    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

Complex sumComplex(Complex c1, Complex c2)
{
    Complex ss;
    ss.setNumber(c1.a + c2.a, c2.a + c2.b);
    return ss;
}
int main()
{
    Complex a, b, c;
    a.setNumber(2, 4);
    a.printNumber();
    b.setNumber(1, 3);
    b.printNumber();

    c = sumComplex(a, b);
    c.printNumber();
    return 0;
}