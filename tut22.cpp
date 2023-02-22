//oops ---classes and objects

    //c++ ---> Initially called as c with classes
    //classes ---> extension of structures
    /* structures had limitations
            --members are public
            --no methods
    --> classes - structures + more
    --> classes can have methods and properties
    --> classes can make few members as public and few as private
    --> structures in c++ are typedefed
    --> you can also declare objects along with the class declaration like
    class employee{
        class defination
    } sai, shiva, harry; */





#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);

};

void binary::read(void)
{
    cout<<"Enter a binary number "<<endl;
    cin>>s;
}

void binary::chk_bin(void)
{
    for(int i= 0; i<s.length() ; i++ )
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Binary format"<<endl;

            exit(0);
        }
    }
}



void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for(int i = 0; i  <s.length(); i++)
    {
        cout<<s.at(i)<<endl;
    }
    cout<<endl;
    
}

int main(){

    

    //Nesting of member

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    
    b.ones_compliment();
    b.display();
     
    
    return 0;
}

