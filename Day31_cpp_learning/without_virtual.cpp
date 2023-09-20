//program 
#include<iostream>
using namespace std;
class student{
public:
void func()
{
    cout<<"This is base "<<endl;
}
};

class teacher:public student{
public:
void func()
{
    cout<<"This is derived "<<endl;
}
};
int main()
{
student *obj;
teacher obj1;
obj=&obj1;
obj->func();  // it gives base class
}

