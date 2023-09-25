# Let's learn about the Abstraction using Abstract Classes
>  While using abstract we just need to think about the abstract class as a TV remote and draw() virtual function as remote button.
> Then, we have two derived classes called rectangle and circle . Take both as different TV remote. And in main() when we create the object of rectangle (rec) and object of circle(cir) ,we need to think both objects as the different remote controls. Means that they both work differently . When we call draw() then it will show the detail of only the derived class function where it belongs to.
> It uses the mechanism the polymorphism and inheritance to show Abstraction in C++.
>Example:
```
//WAP in C++ to demonstrate the abstraction using abstract classes.
#include<iostream>
using namespace std;
class shape
{
public:
virtual void draw()=0;      //pure virtual function decleration
};

//draw implementation must be provided in the derived classes
class rectangle: public shape{
public:
void draw()override{
    cout<<"This is rectangle remote :"<<endl;
}
};

class circle: public shape{
public:
void draw()override{
    cout<<"This is Circle remote :"<<endl;
}
};
int main()
{
rectangle rec;
circle cir;
rec.draw();
cir.draw();

return 0;
}

```
# Let's achieve abstraction using classes and headerfiles
# Abstraction using classes.
> While using classes we specify the access specifiers that determines the details to be accessible or non accessible outside the class.
>Example:
```
//WAP in C++ to demonstrate the abstraction using classes
#include<iostream>
using namespace std;
class student{
private:
int a=5;

public:
void dis()
{
    cout<<"This is dis and it's value is "<<a<<endl;
}
};
int main()
{
student obj;
obj.dis();
}
```
- Here data member a is only accessible within the member function of that class.

# Abstraction using headerfiles.
> Another type of abstraction is headerfiles , like pow() function is used to calculate a function of a number but we don't know which algorithm it is using for calculating the power . Means it hides all the implementation details from the external interface.
> It is defined in math.h header file.
>Example:
```
//WAp in C++ to demonstrate the abstraction using headerfiles
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=4;
    int a=3;
    int x= pow(n,a);
    cout<<"The value is :"<<x<<endl;
    return 0;
}
```