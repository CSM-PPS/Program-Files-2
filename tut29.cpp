#include <iostream>
using namespace std;

class complex
{
    int a, b;

    public:
    // creating a constructor
    // constructor is a special member function with same name as of the class. It is automatically invoked(called)
    // whenever an object is created
    // It is used to initialize the objects of its class


    complex(void); // declaration
    void printnumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(void)
{ // This is a default constructor as it takes no  parameters and runs automatically
    a = 10;
    b = 5;
};
int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}

/*  Properties of constructors

1. should be declared in public section of the class
2. They are automatically invoked whenever the object is created
3. do not have return types   they cannot return values
4. It can have default arguments
5. we cannot refer to their adress
*/