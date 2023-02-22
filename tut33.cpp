#include <iostream>
using namespace std;

class bankdeposit
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    bankdeposit(){};
    bankdeposit(int p, int y, int r);
    bankdeposit(int p, int y, float r);
    void show();
};

bankdeposit :: bankdeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    };
};
bankdeposit ::bankdeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    };
};

void bankdeposit ::show()
{
    cout << endl
         << "Principle ammount is " << principle << endl
         << "Return value after " << years << " years is " << returnvalue << endl;
};

int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    return 0;
}