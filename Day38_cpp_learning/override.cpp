#include<iostream>
using namespace std;
class A{
public:
virtual void display()
{
    cout<<"THis is base"<<endl;
}
};
class B: public A{
public:
virtual void display() override
{
    cout<<"THis is derived"<<endl;
}
};

int main()
{
    A *p=new A();
    B *p1=new B();
    

    p->display();
    p1->display();
}