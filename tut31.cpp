#include <iostream>
using namespace std;

// Constructor ovrloading
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1(9, 4);
    c1.printnumber();
    complex c2(4);
    c2.printnumber();
    return 0;
}