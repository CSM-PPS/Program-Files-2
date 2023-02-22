#include<iostream>
#include<list>

using namespace std;


void display(list<int> &lst){
    list<int> :: iterator it;
    for (it= lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> list1; //list of 0 length
    // list<int> list2(7) //empty list of size 7
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(2);
    list1.push_back(4);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(2);


    //Sorting the list
    list1.sort();
    display(list1);

    list<int> list2(3);
    list <int> :: iterator iter;
    iter = list2.begin();
    *iter = 56;
    iter++;
    *iter = 5;
    iter++;
    *iter = 6;
    iter++;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging "<<endl;
    display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);


    return 0;
}