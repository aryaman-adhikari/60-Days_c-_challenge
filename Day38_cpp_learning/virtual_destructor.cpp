#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()
{
    cout<<"It is baase Class"<<endl;
}
 virtual ~ A()
{
    cout<<"Base class destructor"<<endl;
} 
};
class B:public A{
public:
virtual void display()
{
    cout<<"It is Class B"<<endl;
}
virtual  ~ B()
{
    cout<<"Class B destructor is Called"<<endl;
}
};
class C: public A{
public:
virtual void display()
{
    cout<<"It is Class C"<<endl;
}
virtual  ~ C()
{
    cout<<"Class C destructor is Called"<<endl;
}
};
int main()
{
 A *p1=new A();
 A *p2=new B();
 A *p3=new C();

delete p1;
delete p2;
delete p3;
 
}