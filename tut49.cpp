#include <iostream>
#include <bits.\stdc++.h>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor(argument list) : initialization setion
{
    assignment + other code
}
*/

class test
{
    int a;
    int b;

public:
    test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b(2j)
    // test(int i, int j) : a(i), b(a+j)  alll cases will run execpt last case
    // test(int i, int j) : a(i), b(2j)
    // test(int i, int j) : b(j),a(i+b) --->  This will create problem
    // because a will be initialized first so we get garbage value for a.
    {
        // b = j  we can also use like this
        cout << "constructor executed " << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is  " << b << endl;
    }
};

int main()
{
    test t(5, 6);

    return 0;
}