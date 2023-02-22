#include<iostream>
using namespace std;


//count is the static data member of class employee
class employee{
    int id;
    static int count; // static keyword will give access to use the variable count for any object of the class
    
public:
    void setdata(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of this employee is "<<id<<"and this is employee number "<<count<<endl;
    }

    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
int employee::count;
int main(){
    employee sai,shiva;
    sai.setdata();
    sai.getdata();
    employee::getcount();
    shiva.setdata();
    shiva.getdata();
    employee::getcount();
    
    
    return 0;
}