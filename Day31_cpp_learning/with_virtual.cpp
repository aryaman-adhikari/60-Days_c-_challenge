//With virtual
#include<iostream>
using namespace std;
class student{
public:
virtual void func()
{
    cout<<"This is base "<<endl;
}
};

//another derived class
class teacher: public student{
public:
void func()override
{
    cout<<"This is derived "<<endl;
}
};
int main()
{
//let's create a pointer of base class
student *obj= new teacher(); //dynamically creating an object  of of type teacher
obj->func();
delete obj;
}