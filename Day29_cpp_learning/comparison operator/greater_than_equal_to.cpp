//WAP in C++ to demonstrate the greater than equal to operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}

//overloading the operator
int operator>=(student obj)
{
    if( a>=obj.a)
     return 1;
    
   else
   return 0;    
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a in object t1: "<<endl;
t1.get();
cout<<"Enter the value of a in object t2: "<<endl;
t2.get();
//calling the overloaded operator
if(t1>=t2)
{
    cout<<"Object t1 is greater than or equal to"<<endl;

}
else{
    cout<<"Object t2 is greater than or equal to"<<endl;
}
}