#include<iostream>
using namespace std;
class teacher;
class student{
int real, imag;
public:
void get()
{
    cout<<"Enter real and imag";
    cin>>real>>imag;
}
friend void pass(student ,teacher);
};
class teacher{
 int real,imag;
 public:
 void get()
{
    cout<<"Enter real and imag";
    cin>>real>>imag;
}
 friend void pass(student ,teacher);
};
void pass(student s,teacher t)
{
  cout<<s.real<<"+ i"<<s.imag;
  cout<<t.real<<"+ i"<<t.imag;
}
int main()
{
  student obj;
  obj.get();
  teacher obj1;
  obj1.get();
  pass(obj,obj1);
}