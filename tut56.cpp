#include <iostream>
using namespace std;

class baseclass
{
public:
    int var_base=1;
    virtual void display()
    /* when base class pointer points derived class object it displays the function of baseclass
    so to overcome this we use virtual function. So that it prints derived class function(display)*/
    {
        cout << "1.Displaying base class variable var_base  " << var_base << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var_derived=2;
    void display()
    {
        cout << "2.Displaying base class variable var_base :" << var_base << endl;
        cout << "2.Displaying derived class variable var_base :" << var_derived << endl;
    }
};

int main()
{
    baseclass *base_class_pointer;
    baseclass base_obj;
    derivedclass derivedclass_obj;
    base_class_pointer = &derivedclass_obj;
    base_class_pointer->display();
    
    return 0;
}