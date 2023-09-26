#include <iostream> 
using namespace std;

void changeValueByRef(int &i) {
 i = 23;   
}

void referenceVariable() {

    cout << "topic Reference Varaible"<< endl;
    int i = 0;

    cout << "value of i " << i << endl;

    changeValueByRef(i);
    cout << "value of i after method" << i << endl;
}

void typeCasting() {
    cout << "topic TypeCasting"<< endl;

    int a = 34;
    float b = 50.22;

    cout << "cast int to float " << int(b) << endl;
    cout << "cast float to int " << float(a) << endl;
    cout << "a+b " << a + b << endl;
    cout << "a+b " << a + int(b) << endl;
}
int main() {
    cout << "size of 42.5 is " << sizeof(42.5) << endl;
    cout << "size of 42.5f is " << sizeof(42.5f) << endl;
    cout << "size of 42.5F is " << sizeof(42.5F) << endl;
    cout << "size of 42.5l is " << sizeof(42.5l) << endl;
    cout << "size of 42.5L is " << sizeof(42.5L) << endl;

    referenceVariable();

    typeCasting();
    return 0;
}