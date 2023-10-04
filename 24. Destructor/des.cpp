#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "constructor is called" << endl;
    }

    ~A()
    {
        cout << "Destructor is Called" << endl;
    }
};
int main()
{
    A a;
    return 0;
}