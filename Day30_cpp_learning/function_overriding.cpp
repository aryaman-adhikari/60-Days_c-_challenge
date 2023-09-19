//WAP in C++ to demonstrate the function overriding 
#include<iostream>
using namespace std;
class student{
public:
void over()
{
    cout<<"This is base class "<<endl;
}
};

//another class 
class teacher: public student{
public:
void over()
{
    cout<<"This is derived class "<<endl;
    student::over();     //this is another way
}
};
int main()
{
    
    teacher obj;
//this is one way of calling the function of base class
    obj.student::over(); //this will give this is base class
    obj.over(); //THis will give this is student class
         
}