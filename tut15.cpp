#include <iostream>
using namespace std;

//***********functions and function prototypes*********

int sum(int a, int b); // it is a function prototype it assures that in the code there is a fucntion called sum;
void g();

int sum(int a, int b)
{
    int c = a + b;
    return c;
    // a and b are actual parameters will be taking the values of the parameters num 1 and num2;
}

int main()
{

    int num1, num2;
    // num1 and num2 are acutal parameters
    cout << "Enter your first number :" << endl;
    cin >> num1;
    cout << "Enter your second number :" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    g();
}

// if we don't want to write the "Cout" multiple times we can uses the function void'
void g()
{
    cout << "\nHello , World !!";
}