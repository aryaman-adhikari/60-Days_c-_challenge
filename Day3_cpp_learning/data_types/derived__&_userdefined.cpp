//demonstrating using classes
#include<iostream>
#include<string> //for declaring strings
using namespace std;
//making or defining class
class person{
    public:
    //data members
    string name;
    int age;

    //now data function 
    void display(){
        cout<<"My name is"<<name<<"i am"<<age<<" yrs old"<<endl;
    }
};
int main()
{
//now making objects of the class person
person obj1;
obj1.name="Aryan";
obj1.age=20;

//making another object
person obj2;
obj2.name="Jenish";
obj2.age=21;
//displaying the information using member function
cout<<"Person one::"<<endl;
obj1.display();

cout<<"Person two::"<<endl;
obj2.display();

return 0;
}


//In this example there is class named person so it works both as userdefined and as a derived data types in c++.