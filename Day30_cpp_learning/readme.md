# Function overriding
> If derived class define same function as the base class then this condition is known as function overriding. It is used to achieve run time polymorphism. 
> Overriding allows derived class to define own specific implementation for function's which is defined in base class.
> Simple program example:
```

//WAP in C++ to demonstrate the function overriding 
#include<iostream>
using namespace std;
class student{
public:
void over()
{
    cout<<"This is base class "<<endl;
}
};

//another class 
class teacher: public student{
public:
void over()
{
    cout<<"This is derived class "<<endl;
    student::over();     //this is another way
}
};
int main()
{
    
    teacher obj;
//this is one way of calling the function of base class
    obj.student::over(); //this will give this is base class 
    obj.over(); //THis will give this is student class
         
}
```
## Let's talk about virtual function's
> Virtual function is a member function declared in a base class with the virtual keyword. 
- When a function is declared as virtual then it indicates that the function can be overridened by the derived class's function.
- It is used to achieve run time polymorphism as the function called is determined at the run time.
- According to the object type the overriddned function is called .
> Example:
```
//demonstrate virtual function in C++
#include<iostream>
using namespace std;
class vehicle{
public:
virtual void information ()   //making this function virtual
{
cout<<"This is Base virtual function "<<endl;
}



};
//creating another class
class car : public vehicle{
public:
void information()override
{
cout<<"This is car derived class "<<endl;
}
};
//creating another class bike
class bike : public vehicle{
public:
void information() override{
    cout<<"This is bike derived class "<<endl;
}
};
int main()
{
//creating the object of car class
car obj;
bike obj1;

//calling the information function of bike class
obj1.information();

//calling the information function of car class
obj.information();

}
// in this program the bike and the car class overrides the information function of base class to provide details about the specific vehicle.

```
# Differentiate between override and virtual function
- virtual functions are a language feature in C++ that enable the concept of overriding. Overriding is the act of providing a new implementation for a virtual function in a derived class, allowing you to customize the behavior of inherited functions. Virtual functions, when overridden, enable runtime polymorphism by allowing the selection of the appropriate function implementation at runtime based on the object's actual type.

