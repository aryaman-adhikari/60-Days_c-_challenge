//WAP in C++ to demonstrate the function returning object using copy constructure
#include<iostream>
using namespace std;
class student{
    public:
int data;
public:
student()
{
    //default constructor
}
//copy constructor
//student (const student &other):data(other.data){}
student createcopy()   //since const doesn't let to modify the data
{
    return *this;
}
};
int main()  
{
student obj1;
obj1.data=52;
student obj2=obj1.createcopy(); //this function returns the copy of obj1 and assigns it to obj2.
cout<<"The value at object one is :"<<obj1.data<<endl;
cout<<"The value at object two is :"<<obj2.data<<endl;

} 