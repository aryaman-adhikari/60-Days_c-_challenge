//WAP in c++ to demonstrate the example of reference variable
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age=20;   //age variable 
    int &age1=age;  //reference to age variable
    string a="aryan"; //a string variable
    string &b=a;   // reference to a variable

    //let's display it
    cout<<age<<" "<<age1<<endl;
    cout<<a<<" "<<b<<endl;
    //for the memory address

    
    cout<<&age1<<" "<<&b;
    
    }