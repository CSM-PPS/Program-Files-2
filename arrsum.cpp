#include<iostream>
using namespace std;

int arrsum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n ; i++)
    {
        sum = arr[i] + arr[i+1];
    }
    return sum;
}
int main()
{
    int arr[6] = {12,34,5,6,6,5};
    arrsum(arr,6);
    return 0;
}