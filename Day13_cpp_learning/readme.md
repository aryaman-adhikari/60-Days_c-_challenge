# Object and Class
> Objects are the instances of the class and classes are the blueprint of objects. A class members can be accessed by using an object.
>Let's see with program example:
```

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

```
>Let's see another example
```
//WAP in C++ to demonstrate the object and class with multiple method
#include<iostream>
#include<string>
using namespace std;
//making class
class student{
  public:
  int id;
  string name;
  void display(int n, string s)
  {
  id= n;
  name=s;
  }
  void sum()
  {
 cout<<"The ID is :"<<id<<endl;
 cout<<"The Name is:"<<name<<endl;
  }
};
int main()
{
student s1,s2;

s1.display(15,"aryan");
s2.display(20,"sameer");
s1.sum();
s2.sum();
return 0;

}

```
# Constructor
> A Constructor is a special method  which is invoked automatically at the time of object creation. It is used to initialize the data members to the newly created object.
> The name of Constructor and class or structure is same.
## Syntax for Constructor prototype
```
<class-name> (list of parameters);   //this syntax is used  to define class constructure.
//Constructor definition
<class-name>(list of parameters){

}
```
## Making Constructor outside the class
```
<class-name>::<class-name>(list of parameters){

}

```
- Note that Constructor lack a return type since it don't have return value.
# Types of Constructor
1. Default Constructor.
2. Parameterized Constructor.
3. Copy Constructor.

# Default Constructor
>The constructure that doesn't take any argument is known as default constructure.
>Let's see a program example:
```
//WAP in C++ that demonstrates the default constructure
#include<iostream>
using namespace std;
class student{
public:
student()
    {
        cout<<"This is default Constructure";
    }

};
int main()
{
student s1;
student s2;
}

```

# Parameterized Constructor
> The Constructure that takes argument is paramaterized Constructure.(i.e which has parameter is parameterized). It is used to provide distinct value to the object.
>Let's see with program example:
```

//WAP in C++ to demonstrate the paramaterized constructure
#include<iostream>
#include<string>
using namespace std;
class student{
 public:
 int id;
 string name;
 float salary;
 public:
 student(int i,string nam,float sal)
 {
  id=i;
  name=nam;
  salary=sal;  
 }
 void display()
 {
    cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
 }
 
};
int main()
{

//sending the parameters
student s1=student(1,"aryan",232323);
student s2=student(2,"sameer",343);
s1.display();
s2.display();
}

```

# Copy Constructor>
> Copy constructure is used to create a new object by coping the value of another object of the same class.
> It takes reference of the object which is needed to be copied as it's parameter.
>Let's see one example:
```
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

};
int main()
{
    student s1(42); //cretes a s1 object with 42 as int value

    student s2=s1; //it automatically calls the copy constructure 

    //calling the function

s1.display();
s2.display();

}

```
# Destructor
> Destructor is a special member function which is used to destroy the values of the object. Means that when the object is ended or out from it's scope then destructor is automatically called . It is equivalently opposite to the work of constructor. It is created by tilde(~) symbol. It's syntax is:
```
~ class_name()
{

}
//when outside of the class
class_name::~class_name()
{

}
```
- Note that destructor is responsible for releasing all the resources after the object has been destroyed.
>Program Example is:
```
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
```




