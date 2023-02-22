#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b)
{                 // temp   a   b
    int temp = a; // 4      4   5        //But this will not swap a and b
    a = b;        // 4      5   5
    b = temp;     // 4      5   4
}

//**********Call by reference by pointer **********
void swappointer(int *a, int *b)
{
    int temp = *a; // 4 4 5
    *a = *b;       // 4 5  5
    *b = temp;     // 4  5  4   //now the a and b will swap
}

//***********call by reference by c++ reference varaible
void swapreferencevar(int &a, int &b)
{
    int temp = a; // 4  4  5
    a = b;        // 4  5  5
    b = temp;     // 4  5  4   //now the a and b will swap
}

int main()
{
    int x = 4, y = 7;
    cout << "The value of x is " << x << "The value of y is" << y << endl;
    // swap(x,y); this will not swap a and b  so we use

    swappointer(&x, &y);

    cout << "The value of x is " << x << "The value of y is" << y << endl;

    return 0;
}