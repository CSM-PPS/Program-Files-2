#include<iostream>
using namespace std;


// int product(int a, int b){
    //do not use static with inline function
    // static int c = 0;
    // c = c + 1;
//     return a*b+c;
// }

float moneyrecieved(int currentmoney, float factor = 1.04){
    return currentmoney*factor;
}

// int strlen(const *p){
//     //This says that value of p in the function should not be changed
// }


int main(){

    // int a,b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a;
    // cin>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
 
    int money = 100000;
    cout<<"If you have "<<money<< "Rs  in your bank , you will recieve "<<moneyrecieved(money)<<"Rs after 1 year "<<endl;
    cout<<"For VIP : If you have "<<money<<"Rs in your bank , you will recieve "<<moneyrecieved(money , 1.1)<<"Rs after 1 year "<<endl;


    return 0;
}