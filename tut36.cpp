#include <iostream>
using namespace std;

// Base Class
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    };
    employee(){}
};

// Creating a programmer class derived for employee base class

// Derived class syntax
//   class{{derived-class-name}} :  {{visibility-mode}}   {{base-class}}{

// code
//  }

/*
NOTE:::
1) Default visibility mode is private
2) public visibility mode  : Public members of base class remain public members of derived class
3) Private visibility mode :  Public members of base class becomes private members of derived class
4) Private members are never inherited
*/

class programmer : public  employee
{
public:
    int languagecode;
    programmer(int inpid)
    {
        id = inpid;
        languagecode = 9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main()
{
    employee sai(1), shiva(2);
    cout << sai.salary << endl;
    cout << shiva.salary << endl;

    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    return 0;
}