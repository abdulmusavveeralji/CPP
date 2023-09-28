#include <iostream>
using namespace std;
void arrays() {
    int marks[4] = {23,45,56,89};
    cout << marks[0] << " " << marks[1] << " " << marks[2] << " " << marks[3] << endl;

    int mathMarks[4];
    mathMarks[0] = 2;
    mathMarks[1] = 223;
    mathMarks[2] = 42;
    mathMarks[3] = 2233;
    for(int i = 0; i < 4; i++) {
        cout << mathMarks[i] << " ";
    }
}

void arraysWithPointer() {

    cout << endl << "array with pointers" << endl;
    int marks[4] = {23,45,56,89};
    cout << marks << endl;

    int *p = marks;

    cout << " value of *p " << *p++ << endl;
    cout << " value of *p " << *p++ << endl;
    cout << " value of *p " << *p++ << endl;
    cout << " value of *p " << *p++ << endl;
    cout << " value of *p " << *p++ << endl;
}
int main() {
    arrays(); 
    arraysWithPointer();

    cout << endl << endl;
    return 0;
}