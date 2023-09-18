//overloading the not(!) operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}
void show()
{
    cout<<a<<endl;
}

void operator !()
{
    a=!a;
}
};
int main()
{
student t;
cout<<"Enter the value: "<<endl;
t.get();
cout<<"Value before overloading is :"<<endl;
t.show();
//calling overloading 
!t;
cout<<"After overloading::"<<endl;
t.show();

}