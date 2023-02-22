#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Even"<<endl;
        }
    }
    if(n%i!=0){
        cout<<"Odd"<<endl;;
    }
    return 0;
}