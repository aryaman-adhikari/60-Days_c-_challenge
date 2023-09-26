# Namespace in C++
> In C++ namespaces is the feature which allows us to organize the  related code  elements like classes, functions and variables into a named scope. It also used to prevent the naming conflict between classes .
- For accessing the class of namespace we need to use namespace_name::class_name . This method is called explicitily using the defined namespace.This explicitely specifies which namespace this class belongs to. We can use using keyword instead of this.
- Most commonly used namespaces in C++ is std which contains the standard library functions, objects and classes etc. For example : cout is the object in the std namespace.
>Example:
```
#include<iostream>
using namespace std;
namespace first{
    void sayhello()
    {
        cout<<"This is first namespace"<<endl;
    }
}

namespace second{
    void sayhello()
    {
        cout<<"This is second namespace"<<endl;
    }
}
int main()
{

first::sayhello();
using namespace second;
sayhello();
}
```
