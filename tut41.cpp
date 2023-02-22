#include <iostream>
using namespace std;

//  syntax for multiple inheritance
// class deriverd : visibility-mode base1, visibility-mode base2 {
//     class body for class derived;
// }

class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The sum of base1 and base2 is " << base1int + base2int << endl;
    }
};

/*
    The inherited derived class will look like
    Data members;
        base1int  ---> protected
        base2int  ---> protected

    member functions:
    setbase1int()--> public
    setbase2int()--> public
    set show()--> public
*/
int main()
{
    derived sai;
    sai.setbase1int(54);
    sai.setbase2int(34);
    sai.show();

    return 0;
}