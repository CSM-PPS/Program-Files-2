#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>
class sai
{
public:
    t1 a;
    t2 b;
    t3 c;
    sai(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    sai<> s(8, 8.9, 's');
    s.display();
    cout << endl;

    sai<char, float, int> h('s', 56.6, 8);
    h.display();

    return 0;
}