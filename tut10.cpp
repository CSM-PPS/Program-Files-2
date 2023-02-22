#include<iostream>
using namespace std;

int main()
{
    /*There are three types loops in c++
    1)for loop
    2)While loop
    3)do-while loop
    */


   //for loop
   for (int i = 0; i <=100; i++)
   {
    cout<<i<<endl;
    
   }
    
    //while loop
    int i = 1;
    while(i<=100){
        cout<<i<<endl;
        i++;
    }

    //do while loop
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=100);

    

   



    return 0;
}