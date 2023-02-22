#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // declaration

    void printnumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{ // This is a parameterized constructor
    a = x;
    b = y;
};

int main()
{
    // Implicit call
    complex a(4, 5);

    // Explicit call
    complex b = complex(5, 6);

    a.printnumber();
    b.printnumber();

    return 0;
}