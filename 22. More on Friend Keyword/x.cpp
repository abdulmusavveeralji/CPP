#include <iostream>
using namespace std;

class y;
class x
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
    friend void add(x, y);
};

class y
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
    friend void add(x, y);
};

void add(x a, y b)
{
    cout << "Sum of data from X and Y Classes are " << a.data + b.data << endl;
}
int main()
{
    x a;
    y b;
    a.setData(3);
    b.setData(5);
    add(a, b);
    return 0;
}