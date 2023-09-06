# Static
>In C++ static is a keyword which is used to initialize a static variable,function or classes etc.
>Unlike local vaiables it is more efficient and useful .
> In C++ static is a keyword or mosifier which is used to define members (such as variables or functions etc) which belongs to the class itself rather than any instance (object ) of the class.
>It saves memory.
- HOW??
>let's see when we declare a data member with a static keyword it means that the data member is accessible for all the instances of the class rather than any specific object.
>So, when we make a normal object it typically consumes the memory for it's data member but using static the declared variable belongs to the class as a whole and it is shared among the instances.
>Here's the program example:
```

//WAP in C++ to demonstrate the static keyword or modifiers
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    int acc;
    string namee;
static float rate;     //making a static data member
public:
student(int value,string name)
{
    this->acc=value;
    this->namee=name;
}
void display(){
    cout<<rate<<","<<acc<<","<<namee<<endl ;
    
}

};
//initializing the static data member
float student::rate=6.5;
int main()
{
student obj1(201,"aryan"); 
student obj2(202,"nepal");
obj1.display();
obj2.display();
}

```
# Conclusion 
> In conclusion we can say that static is a keyword or modifier in C++ through which we can create static fields(variables), methods,constructors,classes etc according to our need. It is efficient because all those members created using static uses a same memory as they are associated with the classes rather than any instance of class.

# Structure in C++
>Let's see a program example that clarifies the example of structure in C++ and accessing the elements of structure.
```
//WAP in C++ that demostrates the example of structure
#include<iostream>
#include<string>
using namespace std;
struct student{
    int id;
    string name;
    float percentage;
    student()
    {

    }
    //making constructor
    student(int i,string na,float per)
    {
    id=i;
    name=na;
    percentage=per; 
    }

    //making member function
    void detail()
    {
      cout<<id<<","<<name<<","<<percentage<<endl;
    }
};
int main()
{
    struct student std; //making structure variable
    std=student(2,"aryan",98.99);
    std.detail();
    


}

```

