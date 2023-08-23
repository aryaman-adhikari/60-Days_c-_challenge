//WAP in C++ tok demonstrate the pointer expression
#include<iostream>
using namespace std;
int main()
{
    int *p,a=9;
    p=&a;
    cout<<"The address of variable a is:::"<<p<<endl;
    cout<<"The value of that  address is :::"<<*p<<endl;
}