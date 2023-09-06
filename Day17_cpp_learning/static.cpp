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