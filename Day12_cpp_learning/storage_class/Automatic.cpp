//WAP in C++ to demonstrate the automatic storage class 
#include<iostream>
using namespace std;
int main()
{
auto  a=5; //auto deduces the int type 
auto b=3.5; //auto deduces the float tpe
auto c="hello";   //auto deduces the const char* type
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
}
//here compiler automatically determines the type for the data so auto is used to declare variables when there is difficulty to write long or complex type name to write out.