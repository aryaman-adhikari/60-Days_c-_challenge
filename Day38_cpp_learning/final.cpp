#include<iostream>
using namespace std;
class A final{
public:
virtual void display()
{
    cout<<"This is base"<<endl;
}
};
// class B: public A{

// };
class base{
public:
virtual void display ()final
{
    cout<<"This is base"<<endl;
}
};
// class derived : public base{
// public:
// virtual void display()
// {
//     cout<<"This is derived"<<endl;
// }
// };