#include<iostream>
using namespace std;
class A{
public:
void a()
{
    cout<<"This is A"<<endl;
}
};
class B{
    public:
    void a()
    {
        cout<<"This is B"<<endl;
    }
};
class C:public A,public B{
    public:
    void c()
    {
        cout<<"This is C"<<endl;
    }
};
//in this type of case a ambiquity is occured .
//to resolve it we can use :: operator

int main()
{
C obj;
obj.c();
obj.A::a();
obj.B::a();
}