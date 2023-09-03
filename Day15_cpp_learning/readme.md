# Destructor
> It works opposite of constructor. It destroy the objects of class. It can be defined only once in a class. It is defined by giving the class name but prefixed with tilde sign(~). Note that there is no parameter's in destructors so modifiers can't be applied on destructor.
```
//WAP in C++ to create a constructor and destructor
#include<iostream>
using namespace std;
class student{
    public:
 int   data;
public:
student()
{
    cout<<"Constructor called"<<endl;
}
//creating destructors
~student()
{
    cout<<"Destructor Called"<<endl;
}
};
int main()
{
student obj1;
student obj2;
}

```

- When an object is created then it automatically calls a constructor and when the object goes out of scope then it automatically calls the destructor.


# This pointer
> In C++ this is a keyword that refers to the current instance of a class. It is mainly used for three purposes of this in C++.
1. It can be used to pass the current object as a parameter to another method.
2. It can be used to refer current class instance variable.
3. It can be used to declare indexers.
# passing the current object as a parameter to another method

```
//WAP in C++ to demonstrate the this pointer by passing the object 
#include<iostream>
using namespace std;
class student{
public:
int data;
public:

student (int a):data(a){}

void printdata()
{
  cout<<"The data is:"<<this->data<<endl;
}
void process()
{
execute(this);
}
void execute(student *obj)
{
cout<<"The data is:"<<obj->data<<endl;
}

};
int main()
{
student obj1(42);
obj1.printdata();
obj1.process();

}
```
# Refers current class instance variable.
```
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

```