//WAP in C++ to create a constructor and destructor
#include<iostream>
using namespace std;
class student{
    public:
 int   data;
public:
student()
{
    cout<<"Constructor called"<<endl;
}
//creating destructors
~student()
{
    cout<<"Destructor Called"<<endl;
}
};
int main()
{
student obj1;
student obj2;
}