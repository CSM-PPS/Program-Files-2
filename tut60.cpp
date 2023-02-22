#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st1 = "sai shankar punna";
    string st2;
    // opening files using constructor and writing it
    ofstream out("sample60.txt");  // Write operation
    out<<st1;

    //opening files using constructor and reading it
    ifstream in("sample60b.txt");  // Read operation
    // in>>st2;   This will show only the first word of the sentence so to overcome this we use getline function
    getline(in,st2);
    getline(in,st2);
    getline(in,st2);
    cout<<st2<<endl;
    


    return 0;
}