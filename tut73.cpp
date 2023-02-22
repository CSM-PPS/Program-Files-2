#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an assosiative array
int main()
{
    map<string, int> marksmap;
    marksmap["sai"] = 98;
    marksmap["shiva"] = 54;

    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The size is : " << marksmap.size() << endl;

    return 0;
}