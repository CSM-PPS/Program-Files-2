#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstname = "sai";
    string lastname = "shankar";
    string fullname = firstname.append(lastname);
    cout<<fullname<<endl;

    string x = "sai";
    string y = "shankar";
    string z = x + y;
    cout<<z;

    string x = "abcdefghijklmnopqrstuvwxyz";
    cout<<"The lenght of the string x is "<<x.size()<<endl;

    string s = "sai";
    cout<<s[0]<<endl;

    
    string firstname;
    cout<<"Enter your firstname";
    cin>>firstname;
    cout<<"Your firstname is "<<firstname<<endl;

    string fullname;
    cout<<"Enter your fullname ";
    cin>>fullname;
    getline(cin, fullname);
    cout<<"Your fullname is "<<fullname<<endl;





    return 0;
}