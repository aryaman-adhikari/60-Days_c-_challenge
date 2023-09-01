//WAP in C++ to demonstrate the object and class with multiple method
#include<iostream>
#include<string>
using namespace std;
//making class
class student{
  public:
  int id;
  string name;
  void display(int n, string s)
  {
  id= n;
  name=s;
  }
  void sum()
  {
 cout<<"The ID is :"<<id<<endl;
 cout<<"The Name is:"<<name<<endl;
  }
};
int main()
{
student s1,s2;

s1.display(15,"aryan");
s2.display(20,"sameer");
s1.sum();
s2.sum();
return 0;

}