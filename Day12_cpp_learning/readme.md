# 🚀🚀 Recursion Function in C++
> When a function calls itself then it is known as recursion in C++. If a function calls itself again and again and perform some certain task then it is known as recursive function.
>Let's see a program example:
```
//WAP in C++ to find the factorial of a given number using recursion
#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,x;
    cout<<"Enter the Number:";
    cin>>n;

   x= fact(n);
   cout<<"The factorial of a given Number is::"<<x<<endl;
    return 0;
}
int fact(int n)
{
    
    if(n<1)
    {
        return 0;   //wrong value
    }
    else if(n==1){
        return 1;      //base case or terminating value
    }
    else{
        return (n*fact(n-1));   //calculatiog factorial
    }
}


```

# Tail recursive 
> A function calls itself and doesn't perform any task after function call  is known as tail recursive function.
>Simply we can say that if there is a recursive function call and there is not any further calculations then it is tail recursion which uses the same stack memory . 
>Example:
```
unsigned int factorial(unsigned int n, unsigned int result = 1) {
    if (n == 0) {
        return result;
    }
    return factorial(n - 1, n * result); // Recursive call is in tail position
}

```
>This is tail recursion.
>Let's see another example:
```
int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);  // Recursive call is not in tail position
}



```
>But in this example this is not tail recursion
- NOTE :Tail recursion is important if a programming language or compiler supports tail call optimization(TCO) which makes the same stack memory to get used.

# Storage Classes
>Storage classes are used to define the lifetime,scope or visibility or accessibility of a variable or a function.
>Here lifetime means the time up to when the variable is active and visible.
## Types of Storage Classes in C++
- In c++ there are five types of storage classes:
1. automatic
2. register.
3. mutable.
4. external.
5. static.


>Let's see the example of Automatic storage class.
- It's key word is auto and it's lifetime is up to function block . It's initial value is garbage and it is locally declered.
>Here's the program example:
```

//WAP in C++ to demonstrate the automatic storage class 
#include<iostream>
using namespace std;
int main()
{
auto  a=5; //auto deduces the int type 
auto b=3.5; //auto deduces the float tpe
auto c="hello";   //auto deduces the const char* type
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
}
//here compiler automatically determines the type for the data so auto is used to declare variables when there is difficulty to write long or complex type name to write out.

```
>Let's see how register works
>register is a keyword used to define a variable which is stored in register memory for faster access.
>We cannot access the location of register.
```

//WAP in C++ to demonstrate the use of register as storage class
#include<iostream>
using namespace std;

int main()
{
register int a=50;
cout<<"The value is:"<<a<<endl;
}
```
>Let's see how static works.
```
//WAP in C++ to demonstrate the static
#include<iostream>
void prin();
using namespace std;
int main()
{
prin();
prin();
prin();

} 
void prin()
{
static int i=1;
int j=1;
cout<<i<<","<<j<<endl;
i++;
j++;
}
//here int makes the value of j=1 for each time but static makes the i increased simultaneusly for each time.
```
>Let's ses how extern works

- Let's declare the header file which uses the extern 
```
//Let's decleration a function using extern
//decleration of an external function
extern int add(int a,int b);    //created a function using the extern
//defining the function
 int add(int a,int b)
{
    return a+b;
}
```
- Let's use that function
```
//let's use the function declered in header file global.hpp
#include<iostream>
#include"global.hpp"
using namespace std;
int main()
{
    cout<<"The sum is::"<<add(5,6)<<endl;
    
}

```
- The extern is used to indicate that an entity has  external linkage and is used in diffrent part of the programs. It is important because we can use the same function many times seamlessly.

# Memory Management
> Memory management is the process of managing the memory, assigning the memory space to all the program's which improves the systems performance.
# Why do we need memory management?
> Like in array sometimes memory is wastage sometimes overflow so to avoid that situation we use new operator to assign the space dynamically.

# In C vs C++
> In C we use malloc(),calloc() functions to allocate memory and free() function to deallocate the memory. In C++  also we can use same functions but additionally there are new unary operator's in C++ (i.e new and delete ) to perform the same operations.

# New 
> New is a unary operator which is used to create an object . we can create an object in C++ using new by the following syntax:
```
pointer_variable=new data_type
```
- The above syntax is used to create an object using new .
## Let's create an object
```
int *p=new int;
float *q=new float;

```
- We have created an p and q pointers with int and float value respectively.
- We can simply assign the value directly to these pointer's .
## Assigning value to newly created object.
```
*p=45;
*q=3.5;
```
## Alternative 
```
pointer_variable=new datatype(value);  //we can also assign by this way.
int *p=new int(45);
```
## Creating One dimensional Array using new()
```
int *p=new int [10];
//here we have allocated memory space for 10 elements for an array.

```

# Delete
> Delete is a unary operator which is used to delete an object which is created by using new. When using delete we need to use it explicitely . So, we can say that the lifetime of an object is not related to the block structure of program.
- The syntax for using delete in C++ is:
```
delete pointer_variable;
//for example
delete p;
delete q;
//this will delete the previously created objects.
```
- We can also use this delete for deallocating the dynamically allocated array. For this the syntax is:
```
delete [size] pointer_variable;
//note that we can either specify or not specify the size of array to be removed.
```

### Here is the program example
```
//WAP in C++ to demonstrate the new and delete 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of Number:";
    cin>>n;
    int i;
    int *p=new int[20];
    for(i=0;i<n;i++)
    {
        cout<<"Input elements:"<<endl;
        cin>>p[i];
    }
    //now printing the elements
    for(i=0;i<n;i++)
    {
        cout<<p[i];
    }
    //deallocating the memory space 
    delete p;
}

```

# malloc() vs new
## Advantages:L
1. New operator doesn't require the sizeof() operator as it automatically computes the size of object.
2. New doesn't require the typecasting as it always returns the correct data type pointer.
3. Like other functions new and delete can also be overloaded.
4. New allows Us to initialize the data object at the time of creating the space for object.

# Example of malloc
```

//WAP in C++ to demonstrate the malloc
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of N:";
    cin>>n;
    int *p=(int *)malloc(n*sizeof(int));
    //allocation of the memory in the heap
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Input elements:";
        cin>>p[i];
    }
    //printing
    for(i=0;i<n;i++)
    {
        cout<<p[i];
    }
    free(p);

}


```
# Difference of Malloc vs new is:
- The new operator constructs an object, i.e., it calls the constructor to initialize an object while malloc() function does not call the constructor. The new operator invokes the constructor, and the delete operator invokes the destructor to destroy the object. This is the biggest difference between the malloc() and new.
- The new is an operator, while malloc() is a predefined function in the stdlib header file.
- The operator new can be overloaded while the malloc() function cannot be overloaded.
- If the sufficient memory is not available in a heap, then the new operator will throw an exception while the malloc() function returns a NULL pointer.
- In the new operator, we need to specify the number of objects to be allocated while in malloc() function, we need to specify the number of bytes to be allocated.
- In the case of a new operator, we have to use the delete operator to deallocate the memory. But in the case of malloc() function, we have to use the free() function to deallocate the memory.
- On the other hand, the memory allocated using malloc() function can be deallocated using the free() function.
- Once the memory is allocated using the new operator, then it cannot be resized. On the other hand, the memory is allocated using malloc() function; then, it can be reallocated using realloc() function.
- The execution time of new is less than the malloc() function as new is a construct, and malloc is a function.
- The new operator does not return the separate pointer variable; it returns the address of the newly created object. On the other hand, the malloc() function returns the void pointer which can be further typecast in a specified type.

# Difference between delete vs free
- The delete is an operator that de-allocates the memory dynamically while the free() is a function that destroys the memory at the runtime.
- The delete operator is used to delete the pointer, which is either allocated using new operator or a NULL pointer, whereas the free() function is used to delete the pointer that is either allocated using malloc(), calloc() or realloc() function or NULL pointer.
- When the delete operator destroys the allocated memory, then it calls the destructor of the class in C++, whereas the free() function does not call the destructor; it only frees the memory from the heap.
- The delete() operator is faster than the free() function.
