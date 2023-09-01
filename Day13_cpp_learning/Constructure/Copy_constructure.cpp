//WAP in C++ to demonstrate the copy constructure 
#include<iostream>
using namespace std;
class student{
private:
int num;
public: 
//paramaterized constructure
student(int value):num(value){}

//copy constructure
student(const student &other):num(other.num){}

 void display()
 {
    cout<<"The number is:"<<num<<endl;
 }
 //creating destructor
 ~student()
 {
    cout<<"The destructor is called"<<endl;
 }
 //destructor is automatically called when the program meets the last braces of the main function(i.e })

};
int main()
{
    student s1(42); //cretes a s1 object with 42 as int value

    student s2=s1; //it automatically calls the copy constructure 

    //calling the function

s1.display();
s2.display();

}