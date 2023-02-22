#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you " << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class derived : public base1, public base2
{

    
    public:
    void greet(){
        base1::greet();  //ambiguity 1
    }
};

class b{
    public:
    void say(){
        cout<<"Hello world "<<endl;
    }
};

class d : public b{
    int a;
    //d's new say() method will override the base b's say() method
    public:
    void say(){
        cout<<"Namaste world "<<endl;
    }
};
int main()
{
    // Ambiguity 1;
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;  
    // d.greet();

    //Ambiguity 2
    b b1;
    b1.say();
    d d1;
    d1.say();


    return 0;

}