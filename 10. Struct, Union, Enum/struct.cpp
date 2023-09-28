#include <iostream>
using namespace std;

struct employee  // Example 1
{
    int eId;
    char favChar;
    float salary;
};
// Example 2
typedef struct employee1  
{
    int eId;
    char favChar;
    float salary;
} ep;

union money {
    int rice;
    char car;
    float pound;
};

void unionExample() {
    union money m;
    m.car = 'A';
    m.rice = 23;
    cout << m.rice << endl;
}

void structExample() {
    cout << "Struct Example " << endl;
    struct employee m; // example 1
    ep n; // example 2
    m.eId = 1;
    m.favChar = 'A';
    m.salary = 500000;

    cout << "id: " << m.eId << endl;
    cout << "salary: " << m.salary << endl;
    cout << "favChar: " << m.favChar << endl;

}
void enumExample () {
    enum Meal{ breakfast, lunch, dinner };
    cout << breakfast;
    cout << lunch;
    cout << dinner;
}
int main() {
    enumExample();
    unionExample();
    structExample();
    return 0;
}   