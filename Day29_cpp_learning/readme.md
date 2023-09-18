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
# Binary Operators
> These operators generally works with two operands.
- Addition, Subtraction, Multiplication, Division and modulos are it's example(+ - * / %)
> Let's overload the additional binary operator(+)
```
//WAP in C++ to demonstrate the ++ overloading
#include<iostream>
using namespace std;
class student {
int a;

public:
void getData()
{
cin >> a;

}
void show()
{
    cout<<"t1+t2=="<< a;
}

//implementation of operator overloading
student operator +(student obj)
{
    student t3;
    t3.a= a + obj.a;
    return t3;
}
//overloading ++ operator


};

int main()
{
student t1,t2,t3;
cout<<"Enter One value :"<<endl;
t1.getData();
cout<<"Enter Second value :"<<endl;
t2.getData();
t3 = t1 + t2;
t3.show();

}
```
> Let's overload the subtraction binary operator
```
//WAP in C++ to demonstrate the binary subtraction overloading
#include<iostream>
using namespace std;
class student{
int a;

public:
void getData()
{
    cin>>a;
}
void show()
{
    cout<<"The subtraction is: "<<a<<endl;
}

//overloading the - binary operator
student operator -(student obj)
{
    student t3;
  t3.a=a-obj.a;
  return t3;
}
};
int main()
{
student t1,t2,t3;
cout<<"Enter the value in First Object: "<<endl;
t1.getData();
cout<<"Enter the value in Second Object: "<<endl;
t2.getData();
t3 = t1-t2;
t3.show();

}

```

>Let's overload multiply operator
```
//WAP in C++ to demonstrate binary - operator overloading
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;

}
void show()
{
    cout<<"After multiply:"<<a<<endl;
}

//operator overloading and it's implementation
student operator *(student obj)
{
student t3;
t3.a=a*obj.a;
return t3;
}
};
int main()
{
student t1,t2,t3;
cout<<"Enter the value in Object one :"<<endl;
t1.getData();
cout<<"Enter the value in Object Two :"<<endl;
t2.getData();
t3 = t1 * t2;  //calling overloaded binary * operator
t3.show();
}
```
> Let's overload the division operator
```

//WAP in C++ to demonstrate the / operator overloading
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void show()
{
    cout<<"After division:"<<a<<endl;

}
student operator/(student obj)  //overloading the / operator
{
    student t3;
    t3.a=a/obj.a;
    return t3;

}
};
int main()
{
    student t1,t2,t3;
    cout<<"Enter the value in Object one: "<<endl;
    t1.getData();
    cout<<"Enter the value in Object Two: "<<endl;
    t2.getData();
    t3 = t1 / t2;  //calling the overloaded operator
    t3.show();
}
```
>Let's overload the % operator
```
//Overloading the % operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void show()
{
    cout<<"After modolus: "<<a<<endl;
}

//overloading the % operator
student operator %(student obj)
{
    student t3;
    t3.a=a%obj.a;
    return t3;
}
};
int main()
{
student t1,t2,t3;
cout<<"Enter the value in Object one: "<<endl;
t1.getData();
cout<<"Enter the value in Object second: "<<endl;
t2.getData();
t3= t1 % t2;
t3.show();
}

```

# Unary Operators 
> Those operator's that perform operations on a single operands to produce new value is known as unary operators.
> Some basic unary operator's are:
1. Unary Minus(changes the sign of it's argument (i.e if the argument is negative then makes it Positive and vice versa))
2. Increment ++(increases the value of operand by 1 either pre-fixly or post- fixly)
3. Decrement --(decreases the value of operand by 1 either pre-fixly or post-fixly)
4. NOT(!)(reverse the logical state of it's operands. This logical not makes value false if the operand is true )

- Let's overload them:
> Unary Minus(-)
```
//WAP to demonstrate overloading of unary minus
#include<iostream>
using namespace std;
class student{
int a,b;

public:
void getData()
{
    cin>>a;
    cin>>b;
}
void show()
{
    cout<<a<<endl;
    cout<<b<<endl;
}
//overloading the unary minus operator
void operator-()
{
 a=-a;
 b=-b;
}
};
int main()
{
student t1;
cout<<"Enter the value of a and b: ";
t1.getData();
cout<<"Valued before unary operation "<<endl;
t1.show();
-t1;   //calling the overloading operator
cout<<"Values after Unary Operation"<<endl;
t1.show();

}
```
>Let's overload the increment operator
```
//overloading increment operator
#include<iostream>
using namespace std;
class student{
int a=0;
public:
void show()
{
    cout<<a<<endl;
}

//preincrementing
void operator++()
{
    a=a+1;
}

//post incrementing
void operator++(int)
{
    a=a+1;
}
};
int main()
{
student t;
cout<<"Value before increment:"<<endl;
t.show();
cout<<"After pre incrementing: "<<endl;
++t;
t.show();
cout<<"Before post incrementing:"<<endl;
t.show();
cout<<"After post incrementing:"<<endl;
t++;
t.show();

}
```
>Let's overload the decrement operator
```
//Demonstrate decrement operator
#include<iostream>
using namespace std;
class student{
int a;
public:
student()
{
    a=0;

}
void show()
{
    cout<<a<<endl;
}

//overloading the pre decrement
void operator--()
{
    a=a-1;
}

//overloading the post decrement
void operator--(int)
{
  
    a=a-1;
}

};
int main()
{
student t;
cout<<"Value before is :";
t.show();
--t;  //calling the operator overloading
cout<<"Value after pre decrement: "<<endl;
t.show();
cout<<"Value before post decrement: "<<endl;
t.show();
t--;       //calling
cout<<"Values after post decrement :"<<endl;
t.show();
}
```

> Let's overload Logical Not (!) operator
```

//Overload logical not
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;

}

void show()
{
    cout<<a<<endl;
}

//overloading the ! operator
void operator!()
{
    a=!a;
}
};
int main()
{
student t;
cout<<"Enter the value of a :"<<endl;
t.get();

cout<<"Value before overloading"<<endl;
t.show();
//calling 
!t;
cout<<"Values after calling overloaded operator is :"<<endl;
t.show();
}
```

# Assignment Operators.
> Assignment operators are used to assign values to the variables. It also includes the shorthand operators.
1. =
2. +=
3. -+
4. *=
5. /+
6. %=
- Note that the right side of this expression is known as value to be operated and the left side is known as the variable with whom the value is assigned .
- Note that the type of variable and the value must be same.
> Let's start by overloading the simple = operator.

```

//overloading = operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void getData()
{
    cin>>a;
}
void show()
{
    cout<<a<<endl;
}
//overloading the =
void operator=(student obj)
{
    a=obj.a;
}
};
int main()
{
student obj1,obj2;
cout<<"Enter the value of A in object one :"<<endl;
obj1.getData();
cout<<"The data of obj1 is :"<<endl;
obj1.show();
//now assign the value of obj1 to obj2
obj2=obj1;
cout<<"After data of object two is :"<<endl;
obj2.show();
}
```
> Let's overload the += operator
- This operator first add the value to operand and then assigns it to a variable.
```
//demonstrate += operator by overloading it
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
   
}
void show()
{
    cout<<a<<endl;
}
//overloading the += operator
void operator+=(student obj2)
{
a=a+obj2.a;
}
};
int main()
{
student obj1,obj2;
cout<<"Enter the value of a for obj one:"<<endl;
obj1.get();
cout<<"Enter the value of a for obj two :"<<endl;
obj2.get();
cout<<"Before Values are: "<<endl;
obj1.show();
obj2.show();
//calling 
obj1+=obj2;
cout<<"After Values :"<<endl;
obj1.show();
obj2.show();
}
```
>Let's overload -= operator.
- This operator subtracts the value from the operand and assign's it to the variable.
```
//WAP in C++ to demonstrate -= operator
//demonstrate -= operator by overloading it
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
   
}
void show()
{
    cout<<a<<endl;
}
//overloading the = operator
void operator-=(student obj2)
{
a=a-obj2.a;
}
};
int main()
{
student obj1,obj2;
cout<<"Enter the value of a for obj one:"<<endl;
obj1.get();
cout<<"Enter the value of a for obj two :"<<endl;
obj2.get();
cout<<"Before Values are: "<<endl;
obj1.show();
obj2.show();
//calling 
obj1-=obj2;
cout<<"After Values :"<<endl;
obj1.show();
obj2.show();
}
```

>Let's overload the *= operator.
- This operator makes the product of value to it's operand and assign's it to the variable.
```
//WAP in C++ to demonstrate *= operator
//demonstrate *= operator by overloading it
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
   
}
void show()
{
    cout<<a<<endl;
}
//overloading the = operator
void operator*=(student obj2)
{
a=a*obj2.a;
}
};
int main()
{
student obj1,obj2;
cout<<"Enter the value of a for obj one:"<<endl;
obj1.get();
cout<<"Enter the value of a for obj two :"<<endl;
obj2.get();
cout<<"Before Values are: "<<endl;
obj1.show();
obj2.show();
//calling 
obj1*=obj2;
cout<<"After Values :"<<endl;
obj1.show();
obj2.show();
}
```
>Let's overload the /= operator.
- This operator divides the value with it's operand and assign's it to the variable.
```
//WAP in C++ to demonstrate /= operator
//demonstrate /= operator by overloading it
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
   
}
void show()
{
    cout<<a<<endl;
}
//overloading the = operator
void operator/=(student obj2)
{
a=a/obj2.a;
}
};
int main()
{
student obj1,obj2;
cout<<"Enter the value of a for obj one:"<<endl;
obj1.get();
cout<<"Enter the value of a for obj two :"<<endl;
obj2.get();
cout<<"Before Values are: "<<endl;
obj1.show();
obj2.show();
//calling 
obj1/=obj2;
cout<<"After Values :"<<endl;
obj1.show();
obj2.show();
}

```

>Let's overload the %= operator.
- This operator first calculates the remainder of it's operand based on given value and assigns it to the variable.
```
//WAP in C++ to demonstrate %= operator
//demonstrate %= operator by overloading it
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
   
}
void show()
{
    cout<<a<<endl;
}
//overloading the = operator
void operator%=(student obj2)
{
a=a%obj2.a;
}
};
int main()
{
student obj1,obj2;
cout<<"Enter the value of a for obj one:"<<endl;
obj1.get();
cout<<"Enter the value of a for obj two :"<<endl;
obj2.get();
cout<<"Before Values are: "<<endl;
obj1.show();
obj2.show();
//calling 
obj1%=obj2;
cout<<"After Values :"<<endl;
obj1.show();
obj2.show();
}
```
# Comparison Operator(relational operator).
> Comparison operator also referred as relational operator is used to compare the operands.
- It's types are:
1. Greater than (>)
2. Less than  (<)
3. Greater than equal to(>=)
4. Less then equal to (<=)
> Let's start by overloading them.
> Overoading Greater than (>) operator.
```
//WAP in C++ to demonstrate overloading greater than operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}
int operator>(student obj)
{
 if(a>obj.a)
 {
    return 1;
 }
 else{
    return 0;
 }
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a in Object t1: "<<endl;
t1.get();
cout<<"Enter the value of a in Object t2: "<<endl;
t2.get();

//calling the overloaded operator
if(t1>t2)
cout<<"Object t1's value is greater"<<endl;

else
cout<<"Object t2's value is greater"<<endl;

}
```
>Overloading the < operator
```
//WAP in C++ to demonstrate overloading less than operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}
int operator<(student obj)
{
 if(a<obj.a)
 {
    return 1;
 }
 else{
    return 0;
 }
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a in Object t1: "<<endl;
t1.get();
cout<<"Enter the value of a in Object t2: "<<endl;
t2.get();

//calling the overloaded operator
if(t1<t2)
cout<<"Object t1's value is smaller"<<endl;

else
cout<<"Object t2's value is smaller"<<endl;

}
```
>Overloading the greater than equal to  operator(>=)
```
//WAP in C++ to demonstrate the greater than equal to operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}

//overloading the operator
int operator>=(student obj)
{
    if( a>=obj.a)
     return 1;
    
   else
   return 0;    
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a in object t1: "<<endl;
t1.get();
cout<<"Enter the value of a in object t2: "<<endl;
t2.get();
//calling the overloaded operator
if(t1>=t2)
{
    cout<<"Object t1 is greater than or equal to"<<endl;

}
else{
    cout<<"Object t2 is greater than or equal to"<<endl;
}
}
```
>Overloading the less than equal to operator (<=)
```
//WAP in C++ to demonstrate the less than equal to operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}

//overloading the operator
int operator<=(student obj)
{
    if( a<=obj.a)
     return 1;
    
   else
   return 0;    
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a in object t1: "<<endl;
t1.get();
cout<<"Enter the value of a in object t2: "<<endl;
t2.get();
//calling the overloaded operator
if(t1<=t2)
{
    cout<<"Object t1 is less than or equal to"<<endl;

}
else{
    cout<<"Object t2 is less than or equal to"<<endl;
}
}
```

# Overloading Logical Operator.
> Logical operators are the symbols that allows us to combine or merge the conditions to make the logical evaluation.
- They are used to perform logical operations on boolean values (true or false).
Logical AND Operator (&&): It is a binary operator that returns true if both of its operands are true. Otherwise, it returns false.
- Logical OR Operator (||): It is a binary operator that returns true if at least one of its operands is true. It returns false only when both operands are false.
- Logical NOT Operator (!): It is a unary operator that is used to negate the value of a condition. It returns true if the condition is false, and false if the condition is true.
- It's types are:
1. And(&&)    It is binary operator
2. Or(||)     It is binary operator 
3. Not(!)     It is unary operator
>Let's see the overloading examples:
>Overloading and && operator
```
//overloading the and operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}
//overloading the && operator
int operator&&(student obj)
{
int x;
x=a && obj.a;
return x;
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a for t1: "<<endl;
t1.get();
cout<<"Enter the value of a for t2: "<<endl;
t2.get();
//calling overloaded operator
int val;
val=t1&&t2;
cout<<val;
return 0;
}
```
> Overloading the or || operator
```
//overloading the and operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}
//overloading the || operator
int operator||(student obj)
{
int x;
x=a || obj.a;
return x;
}
};
int main()
{
student t1,t2;
cout<<"Enter the value of a for t1: "<<endl;
t1.get();
cout<<"Enter the value of a for t2: "<<endl;
t2.get();
//calling overloaded operator
int val;
val=t1||t2;
cout<<val;
return 0;
}
```
> Overloading the not(!) operator.
```
//overloading the not(!) operator
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;
}
void show()
{
    cout<<a<<endl;
}

void operator !()
{
    a=!a;
}
};
int main()
{
student t;
cout<<"Enter the value: "<<endl;
t.get();
cout<<"Value before overloading is :"<<endl;
t.show();
//calling overloading 
!t;
cout<<"After overloading::"<<endl;
t.show();

}
```
# Insertion and extraction operator
> Insertion operator is used to insert the character's to the stream where as extraction operator is used to take the character's from the stream. 
- insertion is generally used with cout(i.e <<)
- extraction is generally used with cin (i.e >>)
- Like other operator's these operators can also be overloaded.(Here , cout is the object of ostream and cin is the object of istream class).
- Function that overloads insertion operator is inserter and function that overloads the extraction operator is called extractor.
- It is important to make operator overloading function a friend because insertion and extraction operator requires two classes.
- In the overloaded insertion and extraction operator's we need to pass the object by reference because when there is any changes done in object's that are passed by values that changes doesn't reflected in the original object resulting it into a garbage value.

# Syntax for making friend function 
- friend return_type operator operator_sign(reference arguments);
```
friend void operator <<(ostream &in , class_name &s);
friend void operator >>(istream &in , class_name &s);
```
> Example:
```
//overload >> and <<
// We need to know that >> and << always works with predefined data types . But here we are using it with user defined datatype (i.e class) .So , we are using friend keyword .
#include<iostream>
using namespace std;
class student{
int a;
public:
friend void operator>>(istream &in, student &s)
{
in>>s.a;

}

friend void operator<<(ostream &out, student &s)
{
out<<s.a<<endl;
}
};
int main()
{
student s,s2;
cout<<"Enter the data for s one :"<<endl;
cin>>s;   //calling
cout<< "Enter the data for s two :"<<endl;
cin>>s2;  //calling 
cout<<"The value of s is :"<<s;
    //calling
cout<<"The value of s2 is :"<<s2;
   //calling 

}

```

- Note : In operator overloading while using friend in unary there must be one explicit argument , in binary there must be two explicit argument .
