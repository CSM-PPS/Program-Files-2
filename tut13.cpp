#include <iostream>
using namespace std;

int main()
{

    //*******Arrays*******

    int chemmarks[4] = {335, 65, 75, 3};

    cout << "These are chem marks" << endl;

    cout << chemmarks[0] << endl;
    cout << chemmarks[1] << endl;
    cout << chemmarks[2] << endl;
    cout << chemmarks[3] << endl;

    // we can also declare array by the following method

    int mathmarks[4];
    mathmarks[0] = 24;
    mathmarks[1] = 25;
    mathmarks[2] = 26;
    mathmarks[3] = 28;

    cout << "These are math marks " << endl;

    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    // you can change the value of array
    mathmarks[2] = 56765;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    // arrays using for loop

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << mathmarks[i] << endl;
    }

    // arrays using while loop//
    int j;
    while (j < 4)
    {
        cout << "The value of marks " << j << " is " << mathmarks[j] << endl;
    }

    // arrays using do while loop//

    int k;

    do
    {
        cout << "The value of marks " << k << " is " << mathmarks[k] << endl;
    } while (k < 4);

    // pointers and arrays//
    int *p = mathmarks;
    cout << "The value of marks is" << *p << endl;
    cout << "The value of marks is" << *(p + 1) << endl;
    cout << "The value of marks is" << *(p + 2) << endl;
    cout << "The value of marks is" << *(p + 3) << endl;

    return 0;
}