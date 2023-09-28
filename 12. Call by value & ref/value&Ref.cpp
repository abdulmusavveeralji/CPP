#include <iostream>
using namespace std;
void callByValueMethod(int a, int b) {
    // Method to swap values
    int temp = a;
    a = b;
    b = temp;
}

void callByRefMethod (int *a, int *b) {
    // Method to swap values
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 23, b = 234;
    cout << "call by ref method " << endl;
    cout << "value of a " << a << " and b " << b << endl;
    callByValueMethod(a, b);
    cout << "value of a " << a << " and b " << b << endl;

    // Nothing happend from the above code
    cout << "call by ref method " << endl;
    cout << "value of a " << a << " and b " << b << endl;
    callByRefMethod(&a, &b);
    cout << "value of a " << a << " and b " << b << endl;
    return 0;
}   