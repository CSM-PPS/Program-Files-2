#include<iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout<<"The value of a + b is "<<a+b<<endl;    
    cout<<"The value of a - b is "<<a-b<<endl;    
    cout<<"The value of a * b is "<<a*b<<endl;    
    cout<<"The value of a / b is "<<a/b<<endl;    
    cout<<"The value of a++ is "<<a++<<endl;    
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;


    /*comparison operator*/
    cout<<"Here are the comparison operators "<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;
    cout<<endl;


    //Logical operators
    cout<<"Following are the Logical operators in c ++"<<endl;
    cout<<"The value of this logical and  operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or  operator is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not  operator is "<<(!(a==b) || (a<b))<<endl;


    




    return 0;
}