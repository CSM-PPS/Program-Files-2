#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 100;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    };
};
int main()
{
    // employee sai,shiva;
    // sai.setid();
    // sai.getid();
    employee insta[4];
    for (int i = 0; i < 4; i++)
    {
        insta[i].setid();
        insta[i].getid();
    }

    return 0;
}