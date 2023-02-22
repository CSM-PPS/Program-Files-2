#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    private:
    int b;
};
/*      VERY IMPORTANT
    For a protected member       public derivation   private derivation    protected derivation
    1) private members           Not inherited       Not inherited         Not inherited
    2) protected members          protected           private               Protected     
    3) public members             public              private               Protected
*/

class derived : protected base{

};
int main(){
    base b;
    derived d;
    // cout<<d.a;   will not work becasuse it is protected in both base and derived class
    return 0;
}