#include<iostream>
using namespace std;

// float average(int a , int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float average(int a , flaot b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class t1, class t2>

float average(t1 a, t2 b)
{
    float avg = (a+b)/2;
    return avg;
};

// Swapping two varaible
template <class t>
void swapf(t &a, t &b){
    t temp  = a;
    a  = b;
    b = temp;
}

int main(){
    float a;
    // a = average(4,5);
    a = average(4,5.9);  // Now we can calculate average b/w different data type numbers like float , int , double...
    cout<<"The average of these numbers is "<<a<<endl;

    int x = 5, y = 8;
    swapf(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}