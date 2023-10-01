#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this is the employee count " << count << endl;
    }

    static void getCount()
    {
        cout << "the count is " << count << endl;
    }
};

int Employee ::count;
int main()
{

    Employee e, f, g;
    e.setData();
    e.getData();
    Employee ::getCount();
    f.setData();
    f.getData();
    Employee ::getCount();
    g.setData();
    g.getData();
    Employee ::getCount();

    cout << endl
         << endl;
    return 0;
}