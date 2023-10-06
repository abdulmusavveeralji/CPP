#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;

    Employee(int a)
    {
        salary = a;
    }
    Employee() {}
};

class Programmer : Employee
{
public:
    Programmer(int inpd)
    {
        id = inpd;
    }
    int languageCode = 9;
    void getData()
    {
        cout << "id is " << id << endl;
    }
};

int main()
{
    Employee a(1), b(2);
    cout << a.salary << endl;
    cout << b.salary << endl;
    Programmer skillF(1);
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}