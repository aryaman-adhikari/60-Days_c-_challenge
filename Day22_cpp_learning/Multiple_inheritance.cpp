//multiple inheritance in C++
#include<iostream>
using namespace std;
class A{
public:
void a()
{
    cout<<"This is first base class"<<endl;
}
};
//creating another base class
class B{
public:
void b()
{
    cout<<"This is second base class"<<endl;
}
};
//creating multiple inheritance
class C:public A,public B
{
    public:
   void c()
   {
    cout<<"This is derived class"<<endl;
   }
};
int main()
{
 C obj;
 obj.c();
 obj.b();
 obj.a();
}