#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void getData()
    {
        cout << "value of A " << a << endl;
        cout << "value of b " << b << endl;
        cout << "value of c " << c << endl;
        cout << "value of d " << d << endl;
        cout << "value of e " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    Employee alji;
    alji.d = 23;
    alji.e = 34;
    alji.setData(34, 43, 6);
    alji.getData();
    return 0;
}