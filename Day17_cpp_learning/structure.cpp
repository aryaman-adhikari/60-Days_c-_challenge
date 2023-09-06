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