//WAP in C++ to demonstrate pure virtual function
#include<iostream>
using namespace std;
class student{
public:
virtual void display()=0; //pure virtual function

};

class teacher: public student{
public:
void display()override
{
cout<<"This is derived class "<<endl;
}
};
int main()
{
//object of base class can't be created
student *obj;
teacher obj1;
obj=&obj1;
obj->display();
}