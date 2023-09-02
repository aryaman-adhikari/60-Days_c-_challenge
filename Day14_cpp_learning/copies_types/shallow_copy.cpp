//WAP in C++ to demonstrate a shallow copy 
// Note that only default copy constructor is able to produce shallow copy
#include<iostream>
using namespace std;
class student{
int a;
int b;
int *p;
public:
student()
{
p=new int;// dynamically allocate memory using new
}
void call(int a1,int b1, int z)
{
a=a1;
b=b1;
*p=z;
}
void showdata()
{
    cout<<"The value is:"<<a<<endl;
    cout<<"The value is:"<<b<<endl;
    cout<<"The value is:"<<*p<<endl;
}
};
int main()
{
student obj1;
obj1.call(3,4,6);

student obj2=obj1;

obj2.showdata();
}