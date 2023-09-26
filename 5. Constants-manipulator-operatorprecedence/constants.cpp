#include <iostream>
#include <iomanip>
using namespace std;

void constants() {
    const int a = 50;

    cout << a << endl;
}

void manipulators() {
    // included iomanip
    cout << "without setw " << 4 << endl;
    cout << "without setw " << 234 << endl;
    cout << "without setw " << 6 << endl;

    cout << "with setw " << setw(15) << 4 << endl;
    cout << "with setw " << setw(15) << 234 << endl;
    cout << "with setw " << setw(15) << 6 << endl;

}

void operatorPrecedence() {
    
}
int main() {

    constants();
    manipulators();
    operatorPrecedence();
    return 0;
}