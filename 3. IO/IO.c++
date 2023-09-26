 #include <iostream>
 using namespace std;

 void sum(int a, int b) {
   cout << "Sum of a and b is: " << a + b << endl;
 }
 int main() {
    int num1, num2;
    cout << "Enter the value of num1: \n ";
    cin >> num1;
    cout << "Enter the value of num2: \n ";
    cin >> num2;

    sum(num1, num2);
    return 0;
 }
 