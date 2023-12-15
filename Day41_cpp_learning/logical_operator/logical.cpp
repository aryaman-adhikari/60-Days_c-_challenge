#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
int operator &&(test obj)
{
 int x;
 x=a&&obj.a;
 return x;
}

int operator ||(test obj)
{
 int x;
 x=a||obj.a;
 return x;
}
void operator !()
{
 
a=!a;
}
void show()
{
    cout<<a;
}
};
int main()
{
test t1,t2;
t1.get();
t2.get();

cout<<"After "<<endl;
int y=t1&&t2;
cout<<y<<endl;

int z=t1 ||t2;
cout<<z<<endl;

!t1;
t1.show();
}