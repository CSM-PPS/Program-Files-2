#include <iostream>
using namespace std;

//  Array of objects using pointers


class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The ID of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // assume we have 3 objects in our shop
    //  1.general items
    //  2.veggies
    //  3.groceries
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr; //This is like int a = b;
    

    //    1  2  3
    //          ^
    //          |        the ptr moves forward as we did ptr++ in first for loop
    //          |        so when we enter second for loop the ptr is pointing the last object
    //          |        so when we using ptr+ in second for loop we are pointing the object which is not
    //         ptr       in our scope(beyond 3rd object) .so we use ptrtemp in second loop
    //  ptrtemp    where ptr and ptrtemp are equal.and the pointer points correctly in 2nd loop.

    int p, i;
    float q;
    // The compiler allocates the memory blocks needed by the shop
    // and compiler allocates 3 memory blocks and makes ptr as first object and we can increment it
    // and use the next operator

    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setdata(p, q); we can also use like below
        ptr->setdata(p,q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << " Item number : " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}      