# Enum 
>In many programming languages enum can be traversed using various looping mechanisms. In C++ let's have a look
```
//enum traversed
#include<iostream>
using namespace std;
//making enum class
enum color{
red,green,blue
};
int main()
{
   


    //using iteration to traverse the enum constants
    for(color i=color::red;i<=color::blue;i=static_cast<color>(static_cast<int>(i)+1))
    //this is the loop for assigning value at i or for type casting 
    {
        cout<<static_cast<int>(i)<<endl;  //casting to print the integer value
    }
}
```

- Besides this enum are also useful for other purposes also :
1. Enum can have field, constructor and methods.

# Friend Function
> In C++ we cannot access the details of the data member of any class . But using friend function we can access the details of data member's of any specific class even though if the data member's are private or protected.
> For using friend function in C++ we need to use a friend keyword as a prefix for the function inside the class.
> For accessing the information of a members's we need to declare a function inside the class body by using friend keyword.
> But we can define the function anywhere like a normal function.
> Note that the function definitation doesn't require friend keyword or scope resolution operator.

## Characteristics of friend function
1. The function is not in the scope of the class which is declared using friend keyword.
2. This function cannot be called through an object as it is not in the scope of the class.
3. It can be invoked like normal function without using the object
4. It can be declared either private or public form.
>Let's see a program example:
```
//friend function
#include<iostream>
using namespace std;
class student{
    private:
    int data;

    //constructor
    public:
    student(int value):data(value){};

    friend void fun_name(student myobj);      //declaring a friend function
};

//defining the function
void fun_name(student obj)
{
    cout<<"The value of private  data is:"<<obj.data<<endl;
}
int main()
{
    student obj(42);

    //calling the friend function
    fun_name(obj);
    return 0;
}
```
