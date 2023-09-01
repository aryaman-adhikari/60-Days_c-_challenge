//WAP in C++ to demonstrate the paramaterized constructure
#include<iostream>
#include<string>
using namespace std;
class student{
 public:
 int id;
 string name;
 float salary;
 public:
 student(int i,string nam,float sal)
 {
  id=i;
  name=nam;
  salary=sal;  
 }
 void display()
 {
    cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
 }
 
};
int main()
{

//sending the parameters
student s1=student(1,"aryan",232323);
student s2=student(2,"sameer",343);
s1.display();
s2.display();
}