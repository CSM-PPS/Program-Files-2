#include<iostream>
using namespace std;

// ***********THIS keyword*************

class A{
    int a;
    public:
        // void setdata(int a)
        // {
        //     this->a  = a;
        // }
        //we can also write like below

        A & setdata(int a){
            this->a = a;
            return *this;
        }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    // THIS is a keyword which is a poninter which points to the object which invokes the 
    // member function
    A a1;
    a1.setdata(4);
    a1.getdata();
    return 0;
}