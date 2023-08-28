# Size of variable 
>Sizeof is an operator that evaluates the size of datatype,variable,constants. It is a compile time operator that returns the size of datatype,variable etc in the compilation time.

# Array of pointers
> Array and pointers are closely related to each other. In C++, the name of an array is considered às a pointer, i.e., the name of an array contains the address of an element. C++ considers the array name as the address of the first element. For example, if we create an array, i.e., a which hold the 10 values of integer type, then a will contain the address of first element, i.e., a[0]. Therefore, we can say that array name (a) is a pointer which is holding the address of the first element of an array.
>Here's a program example:
```
//WAP in c++ to demonstrate the array of pointers
#include<iostream>
using namespace std;
int main()
{
    int *p;
    int a[10];
int i;
for(i=0;i<10;i++)
{
    cout<<"input";
    cin>>a[i];
}
p=a;
cout<<"the value is:"<<*p<<endl;
cout<<"The value is:"<<*a;
}


```
- This example demonstrates that the pointer and array are closely related.