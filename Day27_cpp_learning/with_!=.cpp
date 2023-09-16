#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void operator !=(student obj)  //overloading operator
{
    if(a!=obj.a)
    cout<<"NotEqual";
    else
    cout<<"Equal";
}
};
int main()
{
student t1,t2;
cout<<"Enter the data in Object one:"<<endl;
t1.getData();
cout<<"Enter the data in Object two:"<<endl;
t2.getData();
//calling overloaded operator
t1!=t2;

}

