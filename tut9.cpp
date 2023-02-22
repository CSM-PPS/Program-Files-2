#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Tell me your age : "<<endl;
    cin>>age;

    if(age<18){
        cout<<"Your a minor"<<endl;
    }
    else if (age == 18){
        cout<<"Your now going to be a major and you can drive bikes "<<endl;
    }
    else{
        cout<<"You are a major "<<endl;
    }
    
    int age;
    switch (age)
    {
    case(1):
        cout<<"Your name is sai "<<endl;
        break;
    case(2):
        cout<<"Your name is shiva "<<endl;
    default:
        cout<<"Please tell me your name "<<endl;
        break;
    }



    return 0;
}