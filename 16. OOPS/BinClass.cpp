#include <iostream>
using namespace std;

class binary
{
private:
    string s;

public:
    void read();
    void chk_bin();
    void ones();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary nmber" << endl;
    cin >> s;
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary ::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }

    cout << endl;
}
int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}