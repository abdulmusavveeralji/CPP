#include <iostream>
using namespace std;

void pointers() {
    int a = 23;
    int *b = &a;
    cout << "value of a " << a << endl;
    cout << "value of b " << b << endl;
    cout << "value of &a " << &a << endl;
    cout << "value of *b " << *b << endl;
    cout << "value of &b " << &b << endl;
    
}

void sumWithPointers(int *a, int *b, int *c) {
    *c = *a + *b;
}
int main() {

    int a = 5;
    int b = 2;
    int c = 0;
    pointers();
    sumWithPointers(&a, &b, &c);

    cout << "value of c " << c << endl;
    return 0;
}