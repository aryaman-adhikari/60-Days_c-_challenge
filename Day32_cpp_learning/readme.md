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

# Detail about virtual function
- A C++ virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword.
- It is used to tell the compiler to perform dynamic linkage or late binding on the function.
- There is a necessity to use the single pointer to refer to all the objects of the different classes. So, we create the pointer to the base class that refers to all the derived objects. But, when base class pointer contains the address of the derived class object, always executes the base class function. This issue can only be resolved by using the 'virtual' function.
- A 'virtual' is a keyword preceding the normal declaration of a function.
- When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

# Rules of virtual function
- Virtual functions must be members of some class.
- Virtual functions cannot be static members.
-They are accessed through object pointers.
- They can be a friend of another class.
- A virtual function must be defined in the base class, even though it is not used.
- The prototypes of a virtual function of the base class and all the derived classes must be identical. If the two functions with the same name but different prototypes, C++ will consider them as the overloaded functions.
- We cannot have a virtual constructor, but we can have a virtual destructor

## Consider a situation where we don't use virtual.

```
//program 
#include<iostream>
using namespace std;
class student{
public:
void func()
{
    cout<<"This is base "<<endl;
}
};

class teacher:public student{
public:
void func()
{
    cout<<"This is derived "<<endl;
}
};
int main()
{
student *obj;
teacher obj1;
obj=&obj1;
obj->func();  // it gives base class
}


```
- Like in this program it always executes the base class function . It is pointing to the obj1 of teacher class but also it is printing base class function. WHY??
> It is because in oop languages the virtual function is the essential method through which this function can be solved . In C++ a base class pointer can point the objects of any derived class but cannot directly access it's member's. To resolve it we can use virtual function in the base class that allows us to access the member's of derived class by analyzing the actual type of object which is pointed by base pointer.

## Why pointer is necessary in virtual function.
> While using virtual function a pointer of base class object is very necessary because virtual allows us to treat the object's of derived classes in a uniform way. Means we can access the member's of derived class using pointer while using virtual function.
> Example:
```
//With virtual
#include<iostream>
using namespace std;
class student{
public:
virtual void func()
{
    cout<<"This is base "<<endl;
}
};

//another derived class
class teacher: public student{
public:
void func()override
{
    cout<<"This is derived "<<endl;
}
};
int main()
{
//let's create a pointer of base class
student *obj= new teacher(); //dynamically creating an object  of of type teacher
obj->func();
delete obj;
}
```
- This example clarifies the given statement.

# Pure virtual Function
> A virtual function is not used for performing any task . It only serves as a place holder.
> If a function has no definition then such function is known as do-nothing function. If such function is inside of any class then such class is known as abstract base class which can't declare it's own object. And those do- nothing function is known as pure virtual class. 
>Pure virtual class can be defined as:
```
virtual void func()=0;
```
> Let's see a program example:
```

//WAP in C++ to demonstrate pure virtual function
#include<iostream>
using namespace std;
class student{
public:
virtual void display()=0; //pure virtual function

};

class teacher: public student{
public:
void display()override
{
cout<<"This is derived class "<<endl;
}
};
int main()
{
//object of base class can't be created
student *obj;
teacher obj1;
obj=&obj1;
obj->display();
}
```