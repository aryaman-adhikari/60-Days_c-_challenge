#include<iostream>
using namespace std;
class A{
public:
void sum()
{
    cout<<"THis is base"<<endl;
}
};
class B:public A
{
    public:
    void sum()
    {
        cout<<"This is derived "<<endl;
    }
};
int main()
{
 A obj;
 B objj;
 obj.sum();
 objj.sum();
}