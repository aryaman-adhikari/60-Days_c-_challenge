//WAP in C++ to demonstrate the example of class and object in C++
#include<iostream>
using namespace std;
//remember that a class always defined out side of main function.
//let's make a class
class student
{

    //access specifier
    public:
    //lets add some attributes
    int a=5;
    float b=3.5;
    //member function
    public:
    void data(){
    cout<<"This is class function";

    }

}; //a class is closed by ; operator.
int main()
{
//let's create an object 
student s;
//created an object named s
cout<<"The value of a is:"<<s.a<<endl;
cout<<"The value of b is:"<<s.b<<endl;
s.data();
return 0;
} 