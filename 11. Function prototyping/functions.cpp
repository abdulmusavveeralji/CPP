#include <iostream>
using namespace std;

// this is function prototyping
int sum(int, int);
int main() {

    int num1, num2;
    cout << "Enter num1" << endl;
    cin >> num1;
    cout << "Enter num2" << endl;
    cin >> num2;

    cout << "sum of a and b is " << sum(num1, num2) << endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}