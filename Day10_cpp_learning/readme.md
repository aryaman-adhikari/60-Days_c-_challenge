# 🚀🚀 Void pointer in c++
> In c++ void pointer is a general purpose pointer that can hold the address of any type of  data but not associated with any datatype.
### Syntax:
```
void *ptr;
```
>Example of using void pointer in c++
```
//WAP in c++ to demonstrate the void pointer in c++
#include<iostream>
using namespace std;
int main()
{
    void *ptr,*pttr;
    int a=5;
    float b=6;

    //since void pointer can points to any data type .
    ptr=&a;
    pttr=&b;
    cout<<"The adderss of a is"<<ptr<<endl;
        cout<<"The adderss of a is"<<&a<<endl;
    cout<<"The address of b is"<<pttr<<endl;
        cout<<"The adderss of b is"<<&b<<endl;
        return 0;
}


```
- Note that we use void pointer because normal pointer of any type cannot holds the address of different type of data. 
>Example:
```
//WAP in C++ to demonstrate the error while using the differ pointer and value.
#include<iostream>
using namespace std;
int main()
{
    int *p; //declared a pointer of int type
    float a=5;
    p=&a;
    cout<<a<<endl;
    return 0;

}

//remember that this program gives the error

```
>Now, let's check the difference  of void pointer in c&c++.
## In C
- In C if we can assign the void pointer to any other type of pointer with out any typecasting.
>Example:
```
//WAP in C++ to demonstrate void pointer in c  
//Note that we don't need to type cast in C while assigning the void pointer to any other type of pointer.
#include<stdio.h>
int main()
{
    void *a;
    int *b;
    int data=5;
    //assigning the address of data to *a void pointer.
    a=&data;
    //let's assign the void pointer to b pointer
    b=a;
    //Now let's prints the data using both void and int pointer
  

    printf("The value is %d",*b);
}

```
- This program will give the output of 5 which is correct.
## In C++
- In C++ we cannot assign the void pointer to any other type of pointer .We need to typecast the void pointer to the similar data type of other pointer with whom we are going to assign the address of:
>Let's Check a example:
```
//WAP in c++ to demonstrate the void pointer 
//Note that in C++ we need to typecast the void pointer before assign it to the other pointers.
#include<iostream>
using namespace std;
int main()
{
    void *ptr;
    int *p;
    int a=5;
    //let's assign the value with void pointer
    ptr=&a;
    //now we need typecasting with the syntax (datatype *)
    p=(int*)ptr;
    cout<<"The value is::"<<*p<<endl;
    

}

```

# Reference Varible 
>In c++ there are three type of variable one is normal variable that stores the value of something.Another is pointer variable that holds the address of another variable.And another variable is reference variable .
>Let's talk about reference variable:
- Reference variable is of two types:
1. Reference to non-const value.
2. Reference as aliases.

## Reference to non-const value.
>Reference variable works as an alias for one variable.
>Let's see a program example:
```

//WAP in c++ that demonstrates the reference variable of non-const variable.
#include<iostream>
using namespace std;
int main()
{
    int a=50;
    int &b=a;
    cout<<"The value is:"<<b;
    //here b is alias for a but &b holds the address of a


    return 0;
}

```
## Reference as aliases
>In this method we create different alias for a single variable:
```

//WAP in C++ to demonstrate the reference to alises
#include<iostream>
using namespace std;
int main()
{ 
    int a=50;
    int &b=a;
    int &c=a;
    //Here both b and c holds the value of a.
    cout<<"The value is:"<<b<<endl;
    cou<<"The value is :"<<c<<endl;


    return 0;
    }

```
>In this program b and c works as the alises for the a variable.

## Properties of references
1. Initialization
>We must initialize the reference variable and the alias variable at the time of decleration.
>Example:
```

//WAP in C++ to demonstrate the initialization properties 
#include<iostream>
using namespace std;
int main()
{
int a=50;
int &b=a; //like this these must be initialized at first
cout<<"The value is:"<<b<<endl;

    return 0;
}
```
- Note: if we don't initialize at beginning then we will get compile time error.
2. Reassignment
>We cannot reassign the reference variable with multiple variables.
>Example:
```

//WAP in C++ to demonstrate that  reassignment  is not possible
#include<iostream>
using namespace std;
int main()
{
    
    int b=50,c=100;
int &a=b;
int &a=c;
cout<<a;
   
}
//NOTE that this code will give error at compile time

```

3. Function Parameter.
>We can use the reference variable as a parameter in function .
```
//WAP in c++ to demonstrate the reference variable as parameter in function
#include<iostream>
void sum(int &,int &);
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of A and B";
    cin>>a>>b;
    sum(a,b);
    
}
void sum(int &a,int &b)
{
    int summed=a+b;
    cout<<"The value is:"<<summed;
}


```

4. Reference as shortcut.
>We can use reference variable as shortcut in C++ like shown in example below:
```
//WAP in c++ that demonstrates the use of reference in shortcut
#include<iostream>
using namespace std;
struct person{
    int id;
};
struct detail{
    person p;
};
int main()
{
    struct detail d;
    //now by using reference variable we can access it shortcutly
    int &ref=d.p.id;
    //we created ref as a reference variable that points to the id of person structure.
    ref=20;
    cout<<"The id is::"<<d.p.id<<endl;
       cout<<"The id is::"<<ref<<endl;
}

```
# Differences in pointers and references
- In references an alias is created of an existing variable whereas in pointers a pointer variable is created that stores the address of another variable.
- We can declare a reference variable by using & operator but a pointer variable is created using * operator.
- Likewise, in reference there is automatic indirection (means compiler automatically works as * ), but in pointer we need to dereference a variable.
- Reference and actual variable takes a single memory whereas pointer and actual variable takes different memory spaces.
- There is no concept of reference arithematic but in pointer there is concept of pointer arithmetic.
- We cannot assign the NULL value in reference but we can assign the NULL value in pointers.
- Pointer to pointer is possible but reference to reference is not possible.

# Function Pointers
> In C++ we can create a  function pointer. Means that a pointer that points at a function. We can call a function using function pointer. And we can pass function pointer to another function as a parameter.
> Syntax:
```
void(*funcptr)(int,int);

```
>The above syntax is combined by not return type function with function name funcptr and int,int refers to the list of paremeters.
## Address of a function
>We can get the address of a function by it's name . Or by &function_name.
>Example:
```
//ADDress of a function
#include<iostream>
using namespace std;

int main()
{
    cout<<"The address of main function is:"<< (int *)&main<<endl;
    
   

}

```
## Creating a function Pointer
```
//WAP in C++ to create a function pointer
#include<iostream>
int sum(int,int);
using namespace std;
int main()
{
//creating a function pointer
int(* funptr)(int,int); //decleration of function pointer
funptr=sum;   //pointer is pointing to add function
//address of sum is stored in funptr
//calling sum using funptr
int summed=funptr(4,5);
cout<<"The sum is:"<<summed<<endl;
return 0;
}
int sum(int a,int b)
{
    int summed=a+b;

    return summed;
}

```



