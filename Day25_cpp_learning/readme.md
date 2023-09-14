# Two types of polymorphism
> In C++ there is two types of polymorphism.
1. Run time Polymorphism.
2. Compile time polymorphism.
# Compile time polymorphism
>The overloaded functions are invoked by matching the number of argument and it's type. This information is available at the compile time ,therefore compiler selects the appropriate function according to the inputted parameter's. Compile time polymorphism is achieved by function overloading and operator overloading which is also known as static binding or early binding.
>Example of function overloading:
```
//WAP in C++ to demonstrate the function overloading
#include<iostream>
using namespace std;
class math{

public:
void add(int a,int b)
{
    cout<<"The sum of two number is:"<<a+b<<endl;
}
void add(int a,int b, int c){
    cout<<"The sum of three Number is:"<<(a+b+c)<<endl;
}
void add(int a)
{
    cout<<"single number is:"<<a<<endl;
}

};
int main()
{
    math obj;
    obj.add(5,6);
    obj.add(5,6,7);
    obj.add(2);

}

```

