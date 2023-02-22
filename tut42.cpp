#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, /
    and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and
     performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?  ans. multiple inheritance
    Q2. Which mode of Inheritance are you using?  ans. public
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class simplecal
{
protected:
    int a, b;
    
    double sum, diff, prod, div;

public:
    void setinfosim(int i1, int i2)
    {
        a = i1;
        b = i2;
    };
    
    void process_simple(double, double)
    {
        sum = a + b;
        diff = a - b;
        prod = a * b;
        div = float(a / b); 
    }

    void display_simple()
    {
        cout << "The sum of a and b is " << sum << endl;
        cout << "The difference of a and b is " << diff << endl;
        cout << "The multiplication of a and b is " << prod << endl;
        cout << "The division of a and b is " << float(div) << endl;
    }
};

class scical
{
protected:
    int c, d;
    float sq3, sq4, sqrt3, sqrt4;

public:
    void setinfosci(int x, int y)
    {
        c = x;
        d = y;
    };
    void process_sci(int, int)
    {
        sq3 = c * c;
        sq4 = d * d;
        sqrt3 = sqrt(c);
        sqrt4 = sqrt(d);
    }
    void display_sci()
    {
        cout << "the square of c is " << sq3 << endl;
        cout << "the square of d is " << sq4 << endl;
        cout << "the square root of c is " << sqrt3 << endl;
        cout << "the square root of d is " << sqrt4 << endl;
    }
};

class hybrid : public simplecal, public scical
{
public:
    void set(int a, int b)
    {
        setinfosim(a, b);
        setinfosci(a, b);
    }
    void process(float a, float b)
    {
        process_simple(a, b);
        process_sci(a, b);
    }
    void display()
    {
        display_simple();
        display_sci();
    }
};
int main()
{
    hybrid object;
    object.set(3, 5);
    object.process(6, 5);
    object.display();

    return 0;
}