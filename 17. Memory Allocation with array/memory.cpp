#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void getPrice();
    void setPrice();
};

void Shop ::setPrice()
{
    cout << "Enter Id of your Item" << endl;
    cin >> itemId[counter];
    cout << "Enter price of your Item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::getPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop s;
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.getPrice();
    return 0;
}