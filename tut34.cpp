#include<iostream>
using namespace std;

// ******************   Copy constructor       ***************************

class number
{
    int a;

public:
    number()
    {
        a = 0;
    };
    number(int num)
    {
        a = num;
    }

    // when no copy constructor is found, compiler supplies it own copy constructor
    number(number &obj)
    {
        cout << "Copy constructor called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{

    number x, y(10), z(78), z2;
    z.display();
    x.display();
    y.display();
    number z1(x); // copy constructor invoked
    z1.display();

    z2 = y; // copy constructor not invoked because z2 is already assignied

    number z3 = x; // now copy constructor will be invoked because we are
    // assigning the value of z3 in this line only
    z2.display();
    z3.display();

    return 0;
}







#include<bits/stdc++.h>
using namespace std;

class Box
{
    int l, b, h;

public:
    Box()
    {
    l = 0;
    b = 0;
    h = 0;
    }
    Box(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    Box( Box &B) 
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength() 
    {
        
        return l;
    }
    int getBreadth() 
    {
        return b;
    }
    int getheight() 
    {
        
        return h;
    }
    long long CalculateVolume() 
    { 
      return (long long)l*h*b;
    }
    bool operator <(const Box& b2) 
    { Box b1;
       if(l<b2.l || (b<b2.b&&l==b2.l)||(h<b2.h&&b==b2.b&&l==b2.l))
       { 
           return true;
       }

        return false;
    }
    friend ostream& operator<<(ostream& os,  Box& B);
};
ostream &operator<<(ostream& os,  Box& B)
{
    os << B.l << " " << B.b << " " << B.h;
    return os;
}
void check2()
{
    int n;
    cin >> n;
    Box bx;
    for (int i = 0; i < n; i++)
    {
        int o;
        cin >> o;
        if (o == 1)
        {
            cout << bx<<endl;
        }
        if (o == 2)
        {
            int  l, b, h;
            cin >> l >> b >> h;
            Box b1(l, b, h);
            bx = b1;
    cout<<bx<<endl;
        }
        if (o == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box b1(l, b, h);
            if (b1 < bx)
            {
                cout << "Lesser" << endl;
            }
            else 
            {
                cout << "Greater" << endl;
            }
        }
        if (o == 4)
        {

           //possible issue
            cout<<bx.CalculateVolume()<<endl;
        }
        if (o == 5)
        {    Box b1(bx);
            cout << b1<<endl;
        }
    }
}
int main()
{
    check2();
}