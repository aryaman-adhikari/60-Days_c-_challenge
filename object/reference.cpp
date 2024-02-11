#include<iostream>
#include<string>
using namespace std;
class student{
int real,imag;
public:
void get(int a,int b);
void add(student *obj1,student *obj2);
void display()
{
    cout<<real <<imag;
}
~student()
{
    cout<<"destructor invoked";
}
};
void student::get(int a, int b)
{
    real=a;
    imag=b;
}
void student::add(student *c1,student *c2)
{
    real=c1->real +c2->real;
    imag=c1->imag+ c2->imag;
}
int main()
{
student c1,c2,c3;
c1.get(1,2);
c2.get(2,3);
c3.add(&c1,&c2);
c3.display();   
}