//WAP in C++ that demonstrates the copy constructor when passing by value as argument
#include<iostream>
using namespace std;
class student{
int data;
public:
//creating a paramaterized constructor
student (int value)
{
    data=value;
}
//creating a copy constructor
student(const student &other)
{
    data=other.data;
}
void display()
{
cout<<"The value is::"<<data<<endl;
}
};
int main()
{
student obj1(42);
student obj2(obj1);
obj1.display();
obj2.display();
}