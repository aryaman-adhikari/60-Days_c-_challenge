# Inheritance
> It is the feature of object oriented programming in C++ that allows an object to inherit the properties from parent object.
> Inheritance is the process of inheriting the member data and function of base class or parent class to the derived or child class so that code can be reused , modified or extended .
> It's main advantages in C++ is code reuseability.
- How code is reused??
> Since a child class can inherit the members of base class the code for it's member can be reused. Hence, we don't need to define a member code each time . It reduces the length of code.

# Derived class
> The class which is derived from the base class is called derived class.
>It's syntax is:
```
class derived_class_name::visibility_mode base_class
{
    //derived class

}
```
- Things to notice in derived class are:
1. When  base class is inherited privately in by derived class then the public and protected member's of the base class become private in derived class. So, they are only accessible within the body of derived class. It cannot be accessed outside of the derived class because they already become private for derived class.
>Example:
```
//base and derived inheritance in C++
#include<iostream>
using namespace std;
class base{
public:
int data;
public:
void functi()
{
    cout<<"HELLO"<<endl;
    cout<<data<<endl;
}
};
//creating the derived class
class derived:private base{
public:
void derived_method()
{
    
    data=42;   //this is allowed inside derived class
    functi();  //this is allowed inside derived class


}

};
int main()
{
 derived notacce;
 notacce.derived_method();
//  notacce.data=43;
//  notacce.functi();  //it is not allowed since the derived class is in private
}
```
2. When the base class is inherited publicly by derived class then the public member of the base class remains public in derived class , protected member's of base class becomes protected in derived class but private member's of base class are not accessible .
>example:
```
//Inheritance with base and derived class
#include<iostream>
using namespace std;
class base{
private:
int data;   //it is not accessible within anywhere except base body 
public:
void publ_func(){
    cout<<"It is accessible"<<endl;  //it is accessible everywhere
}
protected:
void prote_func()       //it is accessible within member function of derived
{
    cout<<"Accessible within the derived class member function only"<<endl;
}
};
class derived:public base{
public:
void membe_func()
{
    prote_func();
}

};
int main()
{
derived obj;
obj.publ_func();
obj.membe_func();
}
```
# Types of Inheritance in C++
1. Single Inheritance
2. Multiple Inheritance
3. Multilabel Inheritance
4. Hierarchical Inheritance
5. Hybrid Inheritance
