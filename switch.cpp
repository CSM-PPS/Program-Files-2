#include<iostream>
using namespace std;

int main(){
    char button;
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Hello";
        break;

        case 'b':
        cout<<"Hi"<<endl;
        break;

        default:
        cout<<"I am still learning"<<endl;
        break;
    }

    return 0;


}