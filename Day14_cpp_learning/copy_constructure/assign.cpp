//WAP inC++ to demonstrate the copy constructure use when assigning the objects
#include<iostream>
using namespace std;
class student{
int data;
public:
student (int value):data(value){}
//created a paramaterized copy constructor
//let's create a copy constructor
student (const student &other)
{
data=other.data;  // it copies the data from obj1 to obj2
}
//member function
void display()
{
    cout<<"The value is:"<<data<<endl;
}

};
int main()
{
    student obj1(42);
    //assigning the objects
    student obj2=obj1;
    obj1.display();
    obj2.display();

}