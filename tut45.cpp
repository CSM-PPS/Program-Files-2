#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void setnumber(int a)
    {
        roll_no = a;
    }
    void printnumber(void)
    {
        cout << "Your roll no is " << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, chem;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        chem = m2;
    }

    void printmarks(void)
    {
        cout << "You result is here";
        cout << "maths :" << maths << endl;
        cout << " chem : " << chem << endl;
    }
};

class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is " << endl;
    }
};

class result : public test, public sport
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + chem + score;
        printnumber();
        printmarks();
        print_score();
        cout<<" Your total score is "<<total<<endl;
    }
};

int main()
{
    result sai;
    sai.setnumber(3);
    sai.set_marks(88,45);
    sai.set_score(45);
    sai.display();

    return 0;
}