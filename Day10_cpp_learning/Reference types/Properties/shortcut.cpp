//WAP in c++ that demonstrates the use of reference in shortcut
#include<iostream>
using namespace std;
struct person{
    int id;
};
struct detail{
    person p;
};
int main()
{
    struct detail d;
    //now by using reference variable we can access it shortcutly
    int &ref=d.p.id;
    //we created ref as a reference variable that points to the id of person structure.
    ref=20;
    cout<<"The id is::"<<d.p.id<<endl;
       cout<<"The id is::"<<ref<<endl;
}