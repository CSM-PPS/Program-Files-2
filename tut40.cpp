#include <iostream>
using namespace std;


//**************  Multilevel inheritanace *******************************
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void student ::set_roll_no(int r)
{
    roll_no = r;
};
void student ::get_roll_no()
{
    cout << "the roll no is " << roll_no << endl;
};

class exam : public student
{
protected:
    float mathmarks;
    float physicsmarks;

public:
    void setmarks(float, float);
    void getmarks(void);
};

void exam ::setmarks(float m1, float m2)
{
    mathmarks = m1;
    physicsmarks = m2;
};
void exam ::getmarks()
{
    cout << "The marks obtianed in maths is " << mathmarks << endl;
    cout << "The marks obtianed in physcis is " << physicsmarks << endl;
};

class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll_no();
        getmarks();
        cout << "Your percentage is " << (mathmarks + physicsmarks) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    Notes:
        1) If we are inheriting b from a and c from b : {a-->b-->c }
        2) a is the base class for b and b is base class for c
        3) a-->b-->c is called inheritance path
    */
    result sai, shiva;
    sai.set_roll_no(1);
    sai.setmarks(40.0, 60.0);
    sai.display();

    shiva.set_roll_no(2);
    shiva.setmarks(90.0, 99.0);
    shiva.display();

    return 0;
}