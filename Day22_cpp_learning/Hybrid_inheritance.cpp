#include<iostream>
using namespace std;
class A{
public:
void a()
{
    cout<<"This is A"<<endl;
}
};

class B:public A{
    public:
    void b()
    {
        cout<<"This is B"<<endl;
    }
};

class C{
    public:
    void c()
    {
        cout<<"This is C"<<endl;
    }
};

class D:public B,public C{
public:
void d()
{
    cout<<"This is D"<<endl;
}
};


int main()
{
D obj;
obj.a();
obj.b();
obj.c();
obj.d();
}