# Friend Function
>Let's see when the function is friendly to two classes.
- Program Example:
```

//friend function with two classes
#include<iostream>
using namespace std;
class teacher;  // to inform compiler that there is another class called teacher(forward decleration)
class student{
private:
int data ;

public:
void setdata(int i)
{
    data=i;
}

//friend function
friend void frnd_function(student,teacher);
};
class teacher{
  private:
  int data;

 public:
  void setdata(int i)
  {
    data=i;
  }
//declaring friend function
friend void frnd_function(student,teacher);
  
};

//printing the data or accessing the data using friend function definitation
void frnd_function(student obj1,teacher obj2)
{
    cout<<"The value at data is:"<<obj1.data<<endl;
     cout<<"The value at data is:"<<obj2.data<<endl;
}
int main()
{
 student obj1;
 teacher obj2;

 obj1.setdata(42);
 obj2.setdata(41);

 //calling 
 frnd_function(obj1,obj2);
}

```

# Friend Class
> Friend class is a method in C++ through which a class can be decalred as a friend of certain class and the declared class can access the member data and member function of a declaring class  . Means suppose class A declared class B as a friend then class B can access it's data and function but making friend doesn't mean that both can directly access there data and function. And only the class B can access the class A because class A declared class B as a friend class B hasn't declared Class A as it's friend means that friend class is not two way here. Friend relation is not reciprocal in C++. It is standalone process.
>Here's the program example of friend class:
```
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
```

# Math Function in C++
> C++ provides various types of math functions which is predefined in the header file called math.h.