#include<iostream>
using namespace std;
class complex2; //forward decleration

class complex1{
int real,imag;
friend void display(complex1 obj1, complex2 obj2);
};
class complex2{
int real,imag;
friend void display(complex1 obj1, complex2 obj2);
};
void display(complex1 obj1, complex2 obj2)
{
  cout<<"Enter the real and imaginary for complex one :"<<endl;
  cin>>obj1.real>>obj1.imag;
  cout<<"Enter the real and imaginary for complex two :"<<endl;
  cin>>obj2.real>>obj2.imag;

cout<<obj1.real+obj2.real<<" + "<<obj2.imag+obj1.imag<<"i"<<endl;
}
int main()
{
 complex1 obj;
 complex2 objj;
 display(obj,objj);
 
}