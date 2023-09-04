# This pointer
>As we know that this pointer is used to  point the current object  and  it is used to pass the current object as a parameter to another method.
>It is also used to refer the current object and it can be used to declare indexers.
-Simple example of this pointer is :
```
//WAP in C++ to demonstrate the this pointer
#include<iostream>
#include<string>
using namespace std;
class student{
int integer;
float floating;
string strr;
public:
//making constructor and assigning the value by using this pointer
student(char* str,int val,float digit)
{
    this->strr=str;
    this->integer=val;
    this->floating=digit;
}
void function()
{
 cout<<strr<<","<<integer<<","<<floating<<endl;

}
};
int main()
{
student obj1("aryan",7,3.24);
student obj2("adhikari",8,3.2);

//calling
obj1.function();
obj2.function();

}

```
