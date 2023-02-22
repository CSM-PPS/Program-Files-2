#include <iostream>
using namespace std;

template <class t>
class sai
{
public:
    t data;
    sai(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void sai<t>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << " I am first func  " << a << endl;
};

template <class x>
void func(x a)
{
    cout << " Iam templetized func " << a << endl;
}

int main()
{
    // sai<int> h(5.7);
    // sai<char> h('c');
    // cout << h.data << endl;
    // h.display();

    func(4.90); // exact match function(int type function) takes highest priority if exact match function not found
    // then it will take templatized funciton which will provide required data type

    return 0;
}