//Friend class in C++
#include<iostream>
using namespace std;
class A{

    private:
    int private_data;
    public:

    //constructor to receive data
    A(int data):private_data(data){};

    //declaring the class B as a friend of  Class A.
    friend class B;

    

};
class B{
private:
int private_data;

public:
//making function
void access(A &obj1)
//class B can access the details of class A
{
    cout<<"The value of private_data is:"<<obj1.private_data<<endl;
}

};
int main()
{
    A obj1(42);
    B obj2;

    //calling 
    obj2.access(obj1);

}