#include<iostream>
using namespace std;
class A{
public:
virtual void display()
{
    cout<<"It is baase Class"<<endl;
}
};
class B: public A{
public:
virtual void display()
{
    cout<<"It is B derived Class"<<endl;
}
};
class C: public A{
public:
virtual void display()
{
    cout<<"It is C derived Class"<<endl;
}
};
int main()
{
A *p1=new A();
A *p2=new B();
A *p3=new C();

//accessing
p1->display();
p2->display();
p3->display();


delete p1;
delete p2;
delete p3;


}