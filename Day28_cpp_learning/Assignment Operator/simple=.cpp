//overloading = operator
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
    cout<<a<<endl;
}
//overloading the =
void operator=(student obj)
{
    a=obj.a;
}
};
int main()
{
student obj1,obj2;
cout<<"Enter the value of A in object one :"<<endl;
obj1.getData();
cout<<"The data of obj1 is :"<<endl;
obj1.show();
//now assign the value of obj1 to obj2
obj2=obj1;
cout<<"After data of object two is :"<<endl;
obj2.show();
}