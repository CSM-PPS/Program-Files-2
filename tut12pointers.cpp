#include<iostream>
using namespace std;

int main()
{

    //pointers -- pointer is a datatype which holds the address of other datatypes
    //& ---> address of the operator
    // * ---> (value at ) dereferencing operator

    int a = 3;
    int *b = &a;
    cout<<b<<endl;

    cout<<"The value at address b is "<<*b<<endl;

    //********pointer to pointer ********

    int **c =&b;
    
    cout<<"The address of b is "<<c<<endl;;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c))"<<**c<<endl;
    return 0;
}