//Overloading the % operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void show()
{
    cout<<"After modolus: "<<a<<endl;
}

//overloading the % operator
student operator %(student obj)
{
    student t3;
    t3.a=a%obj.a;
    return t3;
}
};
int main()
{
student t1,t2,t3;
cout<<"Enter the value in Object one: "<<endl;
t1.getData();
cout<<"Enter the value in Object second: "<<endl;
t2.getData();
t3= t1 % t2;
t3.show();
}