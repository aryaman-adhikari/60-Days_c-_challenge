# Aggregation
>In C++ aggregation is the process in which one class defines another class as any entity reference. It is another way to reuse the class. It is a form of association that represents HAS-A relationship.
- Note that inheritance represents IS-A relationship.
> It is useful when we want to represent has-a relationship between objects.
>Example:
```
//WAP in C++ to demonstrate aggregation in C++
#include<iostream>
#include<string>
using namespace std;
class address{
public:
int age;
string name;
//constructor
address(int age,string name)
{
    this->age=age;
    this->name=name;
}
};

class employee{
private:
address *addre; //employee has-a address
public:
string addres;
//constructor
employee(string addres,address *addre)
{
this->addres=addres;
this->addre=addre;
}

void display()
{
    cout<<addre->age<< addre->name<< this->addres<<endl;
}

};
int main()
{
address obj(1,"aryan");
employee obj1("hetauda",&obj);
obj1.display();
}
```