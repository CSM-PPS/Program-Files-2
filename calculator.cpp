#include<iostream>
using namespace std;

int main(){
    double n1,n2;
    cout<<"input first numbers : ";
    cin>>n1;
    cout<<"input second number : ";
    cin>>n2;

    char op;
    cout<<"Input an operator : ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<"sum of two numbers is " <<n1+n2<< endl;
        break;

        case '-':
        cout<<"Difference of two numbers is "<<n1 - n2<<endl;
        break;

        case '*':
        cout<<"Multipication of two numbers is "<<n1 * n2<<endl;
        break;

        case '/':
        cout<<"division of two numbers is " <<n1 / n2<<endl;
        break;

        default:
        cout<<"Enter Another Operator : "<<endl;


    }
    return 0;
}