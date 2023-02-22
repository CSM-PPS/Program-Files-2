#include <iostream>
using namespace std;

int c = 355;
int main()
{
    //********built in datatypes********
    int a, b, c;
    cout << "Enter the value of a " << endl;
    cin >> a;

    cout << "Enter the value of b " << endl;
    cin >> b;

    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "The global c is " << ::c;

    float d = 34.3f;
    long double e = 34.3l;
    cout << "The size of 34.3 is " << sizeof(34.3) << endl;
    cout << "The size of 34.3f is " << sizeof(34.3f) << endl;
    cout << "The size of 34.3l is " << sizeof(34.3l) << endl;
    cout << "The size of 34.3F is " << sizeof(34.3F) << endl;

    //********reference variables*****
    float k = 455;
    float &y = k;
    cout << k << endl;
    cout << y << endl;

    //**********typecasting********
    float a = 67.7;
    cout << "The value of a is " << (int)a;

    return 0;
}