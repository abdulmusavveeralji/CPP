#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

void recursionExample() {
    int factorialNum = 5;
    cout << "factorial of " << factorialNum << " is " << factorial(factorialNum);
}
int main() {

    recursionExample();

    cout << endl << endl;
    return 0;
}