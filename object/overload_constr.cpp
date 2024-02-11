#include<iostream>
#include<string>
using namespace std;
class student{
int a;
string name;
double b;
public:
student(){}
student(int a, string name="rajan")
{
    this->a=a;
    this->name=name;
    cout<<a<<name<<endl;
}
student(int a,string name,double b)
{
    this->a=a;
this->name=name;
    this->b=b;
    cout<<a<<name<<b<<endl;
}

};
int main()
{
student obj,obj1;
obj=student(3);
obj1=student(3,"aryan",3.45);
}