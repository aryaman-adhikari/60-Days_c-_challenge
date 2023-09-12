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