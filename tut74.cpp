#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function objects (functor):: functions wrapped in a class so that it availabe like an object
    int arr[] = {3,45,2,2,1,4};
    sort(arr, arr+5); // sorting in increasing order 
    sort(arr, arr+5, greater<int>()); 
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

// Code with harry c++ playlist done completely