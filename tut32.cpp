#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 8)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};
void simple ::printdata()
{
    cout << "The value of data is " << data1 << " and " << data2 << endl;
}
int main()
{
    simple s(4, 5);
    simple s2(4);
    s.printdata();
    s2.printdata();
    return 0;
}