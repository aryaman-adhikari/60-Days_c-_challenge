#include<iostream>
using namespace std;
class A{
 public:
 virtual void display()
 {
    cout<<"This is me"<<endl;
 }
 virtual ~A()
 {
 cout<<"A destructor"<<endl;
}
};
class B: public A{
public:
virtual void display()
{
cout<<"This is B"<<endl;
}
virtual ~B()
{
    cout<<"B destructor"<<endl;
}
};
class C: public A{
public:
virtual void display()
{
    cout<<"This is C"<<endl;
}
virtual ~C()
{
    cout<<"This is C destructor"<<endl;
}
};
int main()
{
    A *p1=new A();
    A *p2=new B();
    A *p3=new C();

    // p1->display();
    // p2->display();
    // p3->display();

 delete p1;delete p2;delete p3;
}