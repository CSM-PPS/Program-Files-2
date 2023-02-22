#include <iostream>
using namespace std;

class employee
{
private:
    int a;
    int b;
    int c;

public:
    int d, e;
    void setdata(int a, int b, int c);
    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;             
    }
};
void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
};

int main()
{

    employee sai;
    // sai.a = 24;   this will through error because it is declared as private
    sai.d = 2545;
    sai.e = 3643;
    sai.setdata(1, 3, 5);
    sai.getdata();

    return 0;
}