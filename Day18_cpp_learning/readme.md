# Structure in C vs Structure in C++
>As we all know that in c and c++ structure is different . In C structure is used normally to bind different data under a single name but in C++ structure can be used as a class.
- In C the access control for structure members are public by default and there is no concept of access specifiers in C however in C++ we can initialize access specifiers for the structure members.
- In C structure cannot contain the member function but in C++ structure can contain members function.
- In C structure cannot have constructure ,destructors etc however  in C++ structure can have constructure and destructor.
- In c++ we can initialize default member value in structure .

# Structure vs Class
- In Structure if there is no access specifier initialized explicitely then by default the specifier will be public. But in Class if the access specifier is not initialized explicitely then by default it will be private.
- The syntax for the structure decleration is:
```
struct student{
//member's;
};
``` 
- The syntax for the class decleration is:
```
class student{
//access specifier
//data member 
//member function
};

```
- The instance of the structure is known as structure variable but the instance of the class is known as object.

# Enumeration
> Enumeration also referred as enum is a user defined data type that consist of fixed set of constants.
>Several points to remember in enum are:
1. Enum improves type safety
```
//enum type safety
#include<iostream>
using namespace std;
enum color{red,green,blue};
//by default enum in C++ uses int data type so red is assigned at 0 , green at 1 and continues .....
int main()
{
    //here in days inweek if i assigns the value that are not the part of enum constant then it will lead to compilitation error i.e because of type mismatch
color code=green;
switch(code)
{
   case red:
   cout<<"This is red";
   break; 

     case green:
   cout<<"This is green";
   break;

     case blue:
   cout<<"This is blue";
   break;

   default:
   break;
}

}

```
2. Enum can be easily used in switch as shown in the above example
