//Comparing two objects without overloading == operator.
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void compare(student obj)
{
    if(a==obj.a)
    cout<<"Equal";

    else
    cout<<"Not Equal";
}

};
int main()
{
student t1,t2;
cout<<"Enter the first Object:"<<endl;
t1.getData();
cout<<"Enter the Second Object:"<<endl;
t2.getData();
//calling the compare function
t1.compare(t2);

}
