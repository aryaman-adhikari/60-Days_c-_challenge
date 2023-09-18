//WAP in C++ to demonstrate overloading greater than operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}
int operator>(student obj)
{
 if(a>obj.a)
 {
    return 1;
 }
 else{
    return 0;
 }
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a in Object t1: "<<endl;
t1.get();
cout<<"Enter the value of a in Object t2: "<<endl;
t2.get();

//calling the overloaded operator
if(t1>t2)
cout<<"Object t1's value is greater"<<endl;

else
cout<<"Object t2's value is greater"<<endl;

}