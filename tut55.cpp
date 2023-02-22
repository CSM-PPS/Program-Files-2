#include <iostream>
using namespace std;

// Pointers to derived class
class baseclass
{
public:
    int var_base;
    void display()
    {
        cout<<"base class called"<<endl;
        cout << "Displaying base class variable var_base  " << var_base << endl;
    }
};
class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout<<"Derived class called"<<endl;
        cout << "Displaying base class variable var_base :" << var_base << endl;
        cout << "Displaying derived class variable var_base :" << var_derived << endl;
    }
};
int main()
{
    baseclass *base_class_pointer;
    baseclass base_obj;
    derivedclass derivedclass_obj;
    base_class_pointer = &derivedclass_obj;  //pointer points from base class pointer to derived class object
    base_class_pointer->var_base = 45;
    // base_class_pointer->var_derived = 46;   //this will through error
    base_class_pointer->display();



    derivedclass *derived_class_pointer;
    derived_class_pointer = &derivedclass_obj;
    derived_class_pointer->var_derived = 89;
    derived_class_pointer->var_base = 879;
    derived_class_pointer->display();


    return 0;
}