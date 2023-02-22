#include<iostream>
using namespace std;

//*************Function overloading ***********
//if we specify more than one function with same name in same scope it is called function overloading***
int sum(int a , int b){
    cout<<"using function with 2 arguments"<<endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a + b + c;
}

//   find the volume of the cube 
int volume(int a){
    return a*a*a;
}

//  find volume of a rectangular box 
int volume(int l , int b, int h){
    return l*b*h;
}
//*******the compiler automatically takes the function which suits exactly with the no. of arguments in it*********

int main(){

    cout<<"The sum of 4 and 6 is "<<sum(4,6)<<endl;
    cout<<"The sum of 4 , 7 and 6 is "<<sum(4,7,6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"The volume of rectangular box of lenght 3, breadth 4, height 6 is"<<volume(3,4,6)<<endl;
    
    return 0;
}