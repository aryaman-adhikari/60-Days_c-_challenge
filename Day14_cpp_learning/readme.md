# Copy Constructor
> It is a constructor that is used to make a copy of object . It is used to declare and initialize the object from current object .

## When is copy constructor called
- when we assign the new object with existing object of the same class type.
>Example:
```
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
```
- When sending an existing object of the same class is passed by value as an argument.
>Example:
```

//WAP in C++ that demonstrates the copy constructor when passing by value as argument
#include<iostream>
using namespace std;
class student{
int data;
public:
//creating a paramaterized constructor
student (int value)
{
    data=value;
}
//creating a copy constructor
student(const student &other)
{
    data=other.data;
}
void display()
{
cout<<"The value is::"<<data<<endl;
}
};
int main()
{
student obj1(42);
student obj2(obj1);
obj1.display();
obj2.display();
}

``` 
- When the function returns the object of the same class by value.
>Example:
```
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
```

# Types of Copy Constructor
1. Default Copy Constructor
2. User define Constructor

# Default Copy Constructor
> When we doesn't define a copy constructor explicitely then compiler automatically generates a copy constructor for us as shown in the program:
```
//WAP in C++ that makes defualt copy constructor
#include<iostream>
using namespace std;
class student{
    public:
    int data;
    public:
// in this case a compiler automatically makes a copy constructor
};
int main()
{
    student obj1;
    obj1.data=42;
    student obj2=obj1;
    cout<<"The value is:"<<obj1.data<<endl;
      cout<<"The value is:"<<obj2.data<<endl;


}


```
# User define constructor
> The constructor we created is User define constructor.

## A compiler produces two types of copies
1. Shallow Copy.
2. Deep Copy.
# Shallow Copy.
>In C++ a shallow copy refers to a copy of an object where only the member variable's are copied or duplicated. If there is a pointer in an object for dynamic memory allocation then shallow copy copies the address of a pointer variable rather than creating a new memory and we from that address we are able to access it's data.
- Note default copy constructor is only able to perform shallow copy .
>Example:
```
//WAP in C++ to demonstrate a shallow copy 
// Note that only default copy constructor is able to produce shallow copy
#include<iostream>
using namespace std;
class student{
int a;
int b;
int *p;
public:
student()
{
p=new int;// dynamically allocate memory using new
}
void call(int a1,int b1, int z)
{
a=a1;
b=b1;
*p=z;
}
void showdata()
{
    cout<<"The value is:"<<a<<endl;
    cout<<"The value is:"<<b<<endl;
    cout<<"The value is:"<<*p<<endl;
}
};
int main()
{
student obj1;
obj1.call(3,4,6);

student obj2=obj1;

obj2.showdata();
}
```



# Deep Copy
>Deep copy dynamically allocates memory for the copy and then copies the actual value. Both the source and copy have distinct memory location. (i.e they will not share the same memory location)
- Note that for deep copy user defined constructor is necessary.
>Example:
```

//WAP inC++ to demonstrate a deep copy constructor
#include<iostream>
using namespace std;
class student{
    public:
int a;
int b;
int *p;
public:
//making dynamically allocate memory
student()
{
    p=new int;
}
//user defined constructor
student (const student &other)
{
    a=other.a;
    b=other.b;
    p=new int; //allocated sepereate memory for obj2
    *p=*(other.p);  
}
void setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    *p=c1;
}
//for printing
void printing()
{
    cout<<"The value is:"<<a<<endl;
    cout<<"The value is:"<<b<<endl;
    cout<<"The value is:"<<*p<<endl;
}
};
int main()
{
    student obj1;
    obj1.setdata(3,4,6);
    student obj2=obj1;
    obj2.printing();
}
```

