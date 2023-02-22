#include <iostream>
#include <bits.\stdc++.h>
using namespace std;

// Abstract base class is class which has a minimum of one pure virutal function
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do nothing function ---> pure virtual function
    // Pure virtual function does nothing and makes sure that in its derived class no function should be like
    // not doing anything. It means that in all derived classes there should be must include display function
    // or else it will through error
};

class cwhvedio : public cwh
{
    int vediolen;

public:
    cwhvedio(string s, float r, int vl) : cwh(s, r)
    {
        int vediolen = vl;
    }
    void display()
    {
        cout << "This is an amazing vedio with title " << title << endl;
        cout << "Ratings  : " << rating << " Out of 5 stars " << endl;
        cout << "Length of the vedio is " << vediolen << " minutes " << endl;
    }
};
class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorail : " << rating << " Out of 5 stars " << endl;
        cout << "No of words in this text tutorial  " << words << " words " << endl;
    }
};
int main()
{
    string title;
    float rating;
    int words, vlen;

    // for cwhvedio
    title = " c++ tutorial ";
    vlen = 49;
    rating = 4.5;

    cwhvedio cpptut(title, rating, vlen);
    cpptut.display();

    // for cwhtext
    title = " c++ tutorial ";
    words = 88900;
    rating = 4.5;

    cwhtext cpptexttut(title, rating, words);
    // cpptexttut.display();

    cwh *tuts[2];
    tuts[0] = &cpptut;
    tuts[1] = &cpptexttut;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
