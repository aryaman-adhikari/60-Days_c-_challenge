# 🚀🚀 Day 11
## Function pointer in c++
> Note that function pointer is also used to call a function indirectly as shown in the example:
```

//WAP in c++ to demonstrate the function pointer calling indirectly
#include<iostream>
void sum(int,int);
using namespace std;
int main()
{
    int a,b;
 //creating a function pointer
 void(* funptr)(int,int);
 funptr=sum; //assigned a funptr to address of sum module.
 //we have created a function pointer named funptr which takes two integer argument
 cout<<"Enter the Numbers:"<<endl;
 cin>>a>>b;
 //now we can use funptr to call the sum indirectly
 funptr(a,b);


}
void sum(int a,int b)
{
int summ;
summ=a+b;
cout<<"The sum is::"<<summ<<endl;

}
```

- Let's see another program example taking string:
```
//WAP in C++ to demonstrate the string using function pointer
#include<iostream>
void str(char *);
using namespace std;
int main()
{
    char a[30];
    cout<<"Enter the string:"<<endl;
    cin>>a;
    //creating a function pointer
    void(* name)(char *);
    //assigning the name to str module
    name=str;
    //calling using function pointer
    name(a);


}
void str(char *stri)
{
cout<<"The string is::"<<stri<<endl;    
}

```

## Function pointer as a parameter
```
//WAP in c++ to demonstrate passing the function pointer to function as a parameter
#include<iostream>
void fun1();
void fun2(void(* funptr)());
using namespace std;
int main()
{
  fun2(fun1);
  //calling function 2 and passing function 1 address

}
void fun2(void(* funptr)())
{
  funptr();
}
void fun1()
{

cout<<"This is function one";
}

```

# Functions in C++
>A function in C++ is the module or subroutine that can be called many times which reduces code complexity and increases code reuseability and modularity.
>Function is used to perform any task in the programming.
##  Advantages of Function
- Code Reuseability
> By using function we can reuse the code (means a single module can be called several times).
- Code optimization
> Function makes the code optimization .
> Means that we don't need to write much code for a similar type of problem.
>For example:to find prime numbers (2,343,5344) we need to write the code several times but using function we can get the expected output in just a single module.
# Types of Function
1. Library Function.
> The predefined functions in C++ library is known as Library function for ex: cos(x),exp(x),ceil(x) etc are library functions.
2. User defined functions.
> Those functions that are created by C++ programmers and can be called many times that reduces the code complexity and increases the code optimization is known as User defined function.

## Syntax for function decleration
  ```return_type data_type (parameters........)
{
    statements;
}
```

### Let's see a simple program example
  ```
  //WAP in C++ to demonstrate the simple example of function
#include<iostream>
using namespace std;
void fun();
int main()
{
   fun();
   fun();
   fun(); 
}
void fun()
{
    static int i=0;
    int j=0;

    i++;
    j++;
    cout<<i<<","<<j<<endl;
}
  
  
  ```

## Call by value in Function
> In call by value the value is copied by the parameter of another module of function which is stored in stack and only modified for the specific section only.
>Example:
```
//WAP in C++ to demonstrate the call by value function
#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
    int a,b;
    cout<<"Enter the Numbers:";
    cin>>a>>b;
    sum(a,b);
    return 0;

}
void sum(int a, int b)
{
    int summed=a+b;
    cout<<"The sum is::"<<summed<<endl;
}


``` 

## Call by reference
>Value of other function's is also modified in thiss method because in this method we pass the address of the variable so formal and actual both argument points to the same memory location so changes in one function is directly reflected in another function.
>Example:
```

//WAP in C++ to demonstrate the call by reference
#include<iostream>
void sum(int *,int *);
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    sum(&a,&b);
}
void sum(int *a,int *b)
{
    int summed=*a+*b;
    cout<<"The sum is::"<<summed<<endl;
}

```