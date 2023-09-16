# Two types of polymorphism
> In C++ there is two types of polymorphism.
1. Run time Polymorphism.
2. Compile time polymorphism.
# Compile time polymorphism
>The overloaded functions are invoked by matching the number of argument and it's type. This information is available at the compile time ,therefore compiler selects the appropriate function according to the inputted parameter's. Compile time polymorphism is achieved by function overloading and operator overloading which is also known as static binding or early binding.
## Example of function overloading:
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
- Let's talk about function overloading in brief:
> According to the type and number of argument passed in function the compiler determines the function to be defined at the compile time.
>We have previsouly done function overloading of the same type of data let's head to different type of data:
>Example:
```
//WAP in C++ to overload a function of different type of values
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    void over(int a, float b)
    {
   cout<<"The number is::"<<a<<" and"<<b<<endl;
    }
    void over(int a, float b, char c)
    {
     cout<<"The number is :: "<<a<<" and"<<b<<" and the character is :"<< c<<endl;
    }
 void over(int a, float b, char c, string d)
 {
  cout<<"The number is::"<<a<<" and"<<b<<" and the character is :"<<c<<" also the string is:"<<d<<endl;
 }
};
int main()
{
student obj;
obj.over(2,3.5);
obj.over(2,3.5,'a');
obj.over(2,3.5,'a',"aryan");
}

```
# Function overloading and ambiquity
> When a compiler is unable to decide which function to be invoked among the overloaded functions ,this situation is known as ambigious function overloading . When there is multiple viable arguments and none of them is the best match for the given function call.
- Ambiquity can be occured in three types:
1. Type conversion.
2. Function with default argument.
3. Function with pass by reference.

# Type conversion
> In the example given below the fun(2) will invoke the function with int but when we use float instead of double in that program it will occur ambigious because all the floating point constants are treated as double in C++.
- Example:
```
//WAP in C++ to demonstrate type conversion ambiquity
#include<iostream>
using namespace std;
void fun(int );
void fun(double );
int main()
{
fun(2);
fun(2.3);
}
void fun(int i)
{
cout<<i<<endl;
}
void fun(double j)
{
    cout<<j<<endl;
}
```

# Function with default argument.
>Example:
```
//WAP in C++ to demonstrate default argument ambiquity 
#include<iostream>
using namespace std;
inline void fun(int i)
{
    cout<<i<<endl;
}
inline void fun(int i, int j=5)
{
    cout<<i<< j<<endl;
}
int main()
{
fun(2);

}

This program will give error because the argument fun(2) is valid for the first function but for the second function it is invalid since the second function can be called in two ways i.e fun(2) or fun(2,3). But in this case we have called fun(2) so compiler is not able to select among fun(int i) and fun(int i, int j=5)

```
- The corrected version of this program is:
```

//WAP in C++ to demonstrate default argument ambiquity 
#include<iostream>
using namespace std;
inline void fun(int i)
{
    cout<<i<<endl;
}
inline void fun(int i, int j=5)
{
    cout<<i<<","<< j<<endl;
}
int main()
{
fun(2,3);


}
```
# Function with pass by reference
> The ambigious program is:
```
#include<iostream>
using namespace std;
void fun(int );
void fun(int &);
int main()
{
   int  c=10;
    fun(c);
}
void fun(int a)
{
    cout<<"The value is:"<<a<<endl;
}
void fun(int &b)
{
    cout<<"The value of b is:"<<b<<endl;
}
```
> This will cause error because compiler don't know which function to call as there is no syntatical differences in both of them. We can instead run this:
```
#include<iostream>
using namespace std;
void fun(int );
// void fun(int &);
int main()
{
   int  c=10;
    fun(c);
}
void fun(int a)
{
    cout<<"The value is:"<<a<<endl;
}
// void fun(int &b)
// {
//     cout<<"The value of b is:"<<b<<endl;
// }



```
- Hence , this was the cases of ambiquity in function overloading.

# Operator overloading
> As we all know an operator is used to perform a specific task in the program.
>So, the overloading of the operator means that in C++ the ability of using an operator to behave differently in the particular userdefined classes is called operator overloading.
- Some key points to remember:
1. Operator overloading is the process of using an operator to perform a specific task instead of function.
2. We can only modify the behaviour of operator. Means we cannot create a new operator using overloading.
3. We can add additional task to overloading operator.
4. We cannot change the basic meaning of operator (means when we modify an operator it will work for some specific classes only where the operator is defined)
5. We passes the object as argument in operator overloading.
6. In operator overloading atleast one userdefined data type should be provided.
7. For overloading the operator and the function's class should be same.
8. We cannot use friend function to overload certain operators. However, the member function can be used to overload those operators.

## Some operator's that cannot be modified.
1. Scope resolution operator(::)
2. Ternary (?:)
3. Member access operators like(*,.)
4. sizeof() operator.

## Syntax for operator overloading
```
return_type class_name::operator operator_sign(arguments)
{

}


```
# Overloading equality operators.
1. Comparing two objects without overloading == operator.
2. Comparing two objects with overloading == operator.
3. Comparing two objects without overloading != operator.
4. Comparing two objects with overloading != operator.

# Comparing two Objects without overloading == operator
```
//Comparing two objects without overloading == operator.
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void compare(student obj)
{
    if(a==obj.a)
    cout<<"Equal";

    else
    cout<<"Not Equal";
}

};
int main()
{
student t1,t2;
cout<<"Enter the first Object:"<<endl;
t1.getData();
cout<<"Enter the Second Object:"<<endl;
t2.getData();
//calling the compare function
t1.compare(t2);

}


```
# Comparing two objects by overloading == operator
```
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void operator ==(student obj) //overloading == operator
{
    if(a==obj.a)
    cout<<"Equal";

    else
    cout<<"NotEqual";
}
};
int main()
{
student t1,t2;
cout<<"Enter the object one:"<<endl;
t1.getData();
cout<<"Enter the object two:"<<endl;
t2.getData();
t1==t2;  //calling overloaded operator
}

```
# Comparing two objects without != operators
```
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void compare(student obj)
{
    if(a!=obj.a)
    cout<<"NotEqual";
    else
    cout<<"Equal";
}
};
int main()
{
student t1,t2;
cout<<"Enter the data in Object one:"<<endl;
t1.getData();
cout<<"Enter the data in Object two:"<<endl;
t2.getData();
//calling compare function

t1.compare(t2);
}
```
# Comparing two objects with overloading != operators
```
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void operator !=(student obj)  //overloading operator
{
    if(a!=obj.a)
    cout<<"NotEqual";
    else
    cout<<"Equal";
}
};
int main()
{
student t1,t2;
cout<<"Enter the data in Object one:"<<endl;
t1.getData();
cout<<"Enter the data in Object two:"<<endl;
t2.getData();
//calling overloaded operator
t1!=t2;

}


```