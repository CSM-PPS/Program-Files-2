#include<iostream>
using namespace std;


//    revisiting  pointers
int main(){
    int a = 4;
    int * b = &a;
    cout<<b<<endl;
    cout<<*(b)<<endl;

    //   new operator
    // int * p = new int (40);
    float * p = new float(50.332);

    cout<<*(p)<<endl;


    int * arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;   // we can also write like this
    arr[2] = 30;
    delete[] arr; // This will delete the array and frees the space

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;


    //  delete operator  

    return 0;
}