#include<iostream>
using namespace std;


//**************RECURSION***********************

//*****Finding nth term in fibonacci series**************
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// fib(3)
// fib(1) + fib(2)   example
// fib(1) + fib (1)
// 1 + 1 = 2

//**************Finding factorial of a number***********
int factorial(int n){

    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){

    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    // cout<<"the factorial of a is "<<factorial(a)<<endl;
    cout<<"the term in fibonacci series at the position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}