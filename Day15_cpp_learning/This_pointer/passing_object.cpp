//WAP in C++ to demonstrate the this pointer by passing the object 
#include<iostream>
using namespace std;
class student{
public:
int data;
public:

student (int a):data(a){}

void printdata()
{
  cout<<"The data is:"<<this->data<<endl;
}
void process()
{
execute(this);
}
void execute(student *obj)
{
cout<<"The data is:"<<obj->data<<endl;
}

};
int main()
{
student obj1(42);
obj1.printdata();
obj1.process();

}