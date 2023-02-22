#include <iostream>
using namespace std;

/*
case 1;
class b : public a{
    if the both a and b has constructors then first a() and next b() is invoked
};

case 2:
class a : public b, public c
{
    order of execution of constructor --> b() and c() then a()

};

case 3:
case a : public b ,virtual public c{
    order of execution of constructor --> c() and b ()  then a()
};

*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base class constructor called " << endl;
    }
    void printdatabase1(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base class constructor called " << endl;
    }
    void printdatabase2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class derived : public base1, public base2{
    int derived1, derived2;
    public:
        derived(int a, int b, int c, int d) : base1(a), base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called "<<endl;
        }
        void printdataderived(void){
            cout<<"the value of derived 1 is "<<derived1<<endl; 
            cout<<"the value of derived 2 is "<<derived2<<endl; 
        }
        
};
int main()
{
    derived sai(1,2,3,4);
    sai.printdatabase1();
    sai.printdatabase2();
    sai.printdataderived();

    return 0;
}