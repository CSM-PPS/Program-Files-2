#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    cout<<sqrt(64)<<endl;
    cout<<cbrt(27)<<endl;
    cout<<round(27.34)<<endl;
    cout<<log(10)<<endl;
    cout<<fdim(9,13)<<endl;
    cout<<sin(30)<<endl;
    cout<<cos(60)<<endl;

    int a,b;
    string result = (a>b)? "a is greater than b ":"b is greater than a ";
    cout<<result;


    //*****multidimensional arrays *************

    string num [2][5] = {
        {"3","35","754","7548","74"},
        {"34","352","75","548","74"}
    };
        cout<< num[0][1];

    return 0;
}