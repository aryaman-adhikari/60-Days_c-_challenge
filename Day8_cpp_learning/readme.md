# day 8 
# Structure
- Set of different type of data binding in a single unit under a single name is known as structure. It is the out come of the limitation of array.
> The concepts in structure are strucure defination, structure members, structure variable and for accessing the data from structure defination we need . (dot) operator.
> Let's see a program example:
```

//WAP in c++ to demonstrate the structure in c++ 
#include<iostream>
#include<string>
using namespace std;

struct student{  //Here name of structure is student
int a=10;          //int structure member
string aryan="Aryaman Adhikari";    //string structure member

};        //structure defination must enclosed in semicolon
int main()
{
   // since structure is a user defined variable we can declare it and use it as a abstract variable.
   //Let's create a structure variable
   struct student std;

   // we can use std as accessor for members of structure . Because here std variable is created with the student type.

   //printing the values

   cout<<"Age:"<<" "<<"Name:"<<endl;
   cout<<std.a<<"   "<<std.aryan;

}

```

## One structure in multiple variables
>We can create a multiple structure variable and access the member's of structure like shown in the example:
>Let's see a program example:
```

//WAP in c++ to demonstrate the multiple structure variable in c++
#include<iostream>
#include<string>
using namespace std;

struct student{
    int age;
    string name="Aryan";
    string gender="Male";
}stde,std1,std2;
int main()
{
//let's access it
cout<<"Age:"<<"  "<<"Name:"<<"  "<<"Gender:"<<endl;
cout<<stde.age<<"    "<<std1.name<<"   "<<std2.gender;
}

```

# Reference variable in c++
>Reference variable is a variable that acts as the alias of another variable .It is created by using & operator .Let's see the Program example:
```

//WAP in c++ to demonstrate the example of reference variable
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age=20;   //age variable 
    int &age1=age;  //reference to age variable
    string a="aryan"; //a string variable
    string &b=a;   // reference to a variable

    //let's display it
    cout<<age<<" "<<age1<<endl;
    cout<<a<<" "<<b<<endl;

    cout<<&age1<<" "<<&b;
    //this will display the memory addresses of age and a variable.
    
    
    }
```
- In this given example the age and age1 both will print 20 and a and b variable both prints the aryan. So, this is the concept of reference variable.

- We can also get the memory address of the variable.
# Pointers
> Pointers are the variables that stores the memory location of other variable as it's value.
>Like we have learned in reference variable that & this operator is used to display the memory location of other variable. But pointer is different .Pointer uses the *(DEFERENCING OPERATOR) and &(address operator). Pointer takes memory address of working variable by using & operator and displays it by using * operator.
>Let's take a example:
```
//WAP in c++ to demonstrate the pointer in c++
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=5;
    int *ptr_a=&a;
    string str="aryan";
    string *ptr_str=&str;
    //string* str=&str;
    //string * str=&str;

    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of a is:"<<*ptr_a<<endl;  
    cout<<"The value of string str is:"<<str<<endl;
    cout<<"The value of string str is:"<<*ptr_str<<endl;


    // Now printing the locations of the variables are
    cout<<"The location of a is :"<<&a<<endl;
    cout<<"The location of a is :"<<ptr_a<<endl;
    cout<<"The location of string str is:"<<&str<<endl;
    cout<<"The location of string str is:"<<ptr_str<<endl;

}
```
>Note that the type of value must match the type of pointer variable.