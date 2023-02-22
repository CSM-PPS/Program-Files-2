#include <iostream>
using namespace std;

struct student
{
    int id;
    int age;
    char name;
};
int main()
{

    struct student  sai;
    sai.id = 1;
    sai.name = 's';
    sai.age = 17;

    printf("%d",sai.id);
    printf("%d",sai.age);
    printf("%c",sai.name);


    // cout << "The value is " << sai.id << endl;
    // cout << "The value is " << sai.name << endl;
    // cout << "The value is " << sai.age << endl;
}

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    // enum meal{breakfast,lunch,dinner};
    // meal m1 = breakfast;
    // cout<<m1;
    union money m1;
    m1.rice = 24;
    cout << m1.rice;
    return 0;
}
