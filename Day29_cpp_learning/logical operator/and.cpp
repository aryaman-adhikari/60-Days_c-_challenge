//overloading the and operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}
//overloading the && operator
int operator&&(student obj)
{
int x;
x=a && obj.a;
return x;
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a for t1: "<<endl;
t1.get();
cout<<"Enter the value of a for t2: "<<endl;
t2.get();
//calling overloaded operator
int val;
val=t1&&t2;
cout<<val;
return 0;
}