#include<iostream>
using namespace std;

int main()
{

    int row, col;

    cout<<"Input Number of rows"<<endl;
    cin>>row;

    cout<<"Input Number of columns"<<endl;
    cin>>col;


    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<" ** SAI ** ";
        }
        cout<<endl;
    }

    return 0;
}