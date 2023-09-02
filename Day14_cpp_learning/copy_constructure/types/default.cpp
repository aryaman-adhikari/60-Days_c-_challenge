//WAP in C++ that makes defualt copy constructor
#include<iostream>
using namespace std;
class student{
    public:
    int data;
    public:
// in this case a compiler automatically makes a copy constructor
};
int main()
{
    student obj1;
    obj1.data=42;
    student obj2=obj1;
    cout<<"The value is:"<<obj1.data<<endl;
      cout<<"The value is:"<<obj2.data<<endl;


}
