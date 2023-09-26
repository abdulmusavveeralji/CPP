#include <iostream>
using namespace std;

/* build in Data types
    int
    float
    char
    double
    bool
*/ 

/* User defined Datatypes
    Struct
    Union
    Enum */

/* Derived Datatypes 
    Array
    Function
    Pointer*/

int glob = 6;
void extra2Lines() {
    cout << endl << endl;
}
void sum(int a, int b) {
    cout << "inside sum global is " << glob << endl;
    cout << "sum is " << a + b << endl;
}

void variableDeclaration() {
    int i = 1;
    char ch = 'A';
    float pi = 3.142;
    bool is_true = true;

    cout << "int i = " << i << endl;
    cout << "float f = " << pi << endl;
    cout << "char c = " << ch << endl;
    cout << "bool b = " << is_true << endl;
}
int main() {
    int a = 1, b = 2, c = 4;
    int glob = 2;
    cout << "This is the value of a "<< a << " this is the value of b " << b << endl;
    cout << "global " << ::glob << endl;
    sum(a,b);
    variableDeclaration();

    extra2Lines();
    return 0;
}

