//demonstrate += operator by overloading it
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
//overloading the += operator
void operator+=(student obj2)
{
a=a+obj2.a;
}
};
int main()
{
student obj1,obj2;
cout<<"Enter the value of a for obj one:"<<endl;
obj1.get();
cout<<"Enter the value of a for obj two :"<<endl;
obj2.get();
cout<<"Before Values are: "<<endl;
obj1.show();
obj2.show();
//calling 
obj1+=obj2;
cout<<"After Values :"<<endl;
obj1.show();
obj2.show();
}