#include <iostream>
#include <string>
// Second commit
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void)
    {
        cout << "Enter a binary number\n";
        cin >> s;
    }
    void chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Incorrect binary format" << endl;
                exit(0);
            }
        }
    }
    void ones_complement(void)
    {
        // chk_bin(); write here if the function is private they can be accessed from methods of class
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else if (s.at(i) == '1')
            {
                s.at(i) = '0';
            }
        }
    }
    void display(void)
    {
        cout << "One's complement is " << s << endl;
    }
};

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones_complement();
    b.display();
    return 0;

}
