#include <iostream>
using namespace std;

void ifStatement() {
    int a = 0; 
    int b = 5;
    if (a == b) {
        cout << "equal" << endl;
    } else if (a < b){ 
        cout << "less" << endl;
    } else {
        cout << "nothing" << endl;
    }
}

void switchCase() {
    char c = 'A';
    switch (c)
    {
    case 'A':
        cout << 'A' << endl;
        break;
    
    default:
        cout << "not a" << endl;
        break;
    }
}

void forLoop() {
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
}

void whileLoop() {
    cout << "whileLoop" << endl;
    int i = 5;
    while(i != 0) {
        cout << i << " ";
        --i;
    }
}

void doLoop() {
    cout << "doLoop" << endl;

    int i = 5;
    do {
        cout << i << " ";
        i--;
    } while(i != 0);
}

void breakContinue() {
    int i = 5;
    cout << "dowhile breaking" << endl;
    do {
        cout << i << " ";
        if (i == 2) {
            cout << "breaking" << endl;
            break;
        }
        i--;
    } while(i != 0);

    // do {
    //     cout << i << " ";
    //     if (i == 2) {
    //         cout << "continue" << endl;
    //         continue;
    //     }

    //     if (i == 0){
    //         break;
    //     }
    //     i--;
    // } while(i != 0);
}
int main() {
    ifStatement();
    switchCase();
    forLoop();
    whileLoop();
    doLoop();
    breakContinue();
    return 0;
}