//WAP in C++ to demonstrate the use of this pointer in refering the current class instance variable.
#include<iostream>
using namespace std;
class student{
public:
int data;
public:
student (int a):data(a){}

void setdata()
{
    cout<<"The data is :"<<this->data<<endl;   
}

void change(int b)
{
 this->data=b;
 //using this pointer to differentiate between parameter and instance variable.
}

};
int main()
{
    student obj1(42);

    obj1.setdata(); //42
    obj1.change(99);
    obj1.setdata();  //99

}