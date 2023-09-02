//WAP inC++ to demonstrate a deep copy constructor
#include<iostream>
using namespace std;
class student{
    public:
int a;
int b;
int *p;
public:
//making dynamically allocate memory
student()
{
    p=new int;
}
//user defined constructor
student (const student &other)
{
    a=other.a;
    b=other.b;
    p=new int; //allocated sepereate memory for obj2
    *p=*(other.p);  
}
void setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    *p=c1;
}
//for printing
void printing()
{
    cout<<"The value is:"<<a<<endl;
    cout<<"The value is:"<<b<<endl;
    cout<<"The value is:"<<*p<<endl;
}
};
int main()
{
    student obj1;
    obj1.setdata(3,4,6);
    student obj2=obj1;
    obj2.printing();
}