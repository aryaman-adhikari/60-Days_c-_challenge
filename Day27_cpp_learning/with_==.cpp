#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void operator ==(student obj) //overloading == operator
{
    if(a==obj.a)
    cout<<"Equal";

    else
    cout<<"NotEqual";
}
};
int main()
{
student t1,t2;
cout<<"Enter the object one:"<<endl;
t1.getData();
cout<<"Enter the object two:"<<endl;
t2.getData();
t1==t2;  //calling overloaded operator
}