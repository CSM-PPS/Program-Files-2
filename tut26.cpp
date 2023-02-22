#include <iostream>
using namespace std;

class complex
{
    int a, b;

    public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line tells that sumcomplex is allowed to use the private functions of class complex
    friend complex sumcomplex(complex o1, complex o2);
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 2);
    c2.setnumber(3, 4);

    c1.printnumber();
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}

/*properties of friend function
1. Not in the scope of the class
2. Since it is not in the scope of the class it cannot be called from the object of that class c1.sumcomplex() ---> invalid
3. Can be invoked without the help of the object
4. Usually contains objects as arguments
5. Can be declared in the public or private section of the class
6. It cannot acess the members directly by their name and need object_name.member_name to acess any member
*/