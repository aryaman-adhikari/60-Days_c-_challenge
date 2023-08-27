//WAP in c++ to demonstrate the pointer in c++
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=5;
    int *ptr_a=&a;
    string str="aryan";
    string *ptr_str=&str;
    //string* str=&str;
    //string * str=&str;

    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of a is:"<<*ptr_a<<endl;  
    cout<<"The value of string str is:"<<str<<endl;
    cout<<"The value of string str is:"<<*ptr_str<<endl;


    // Now printing the locations of the variables are
    cout<<"The location of a is :"<<&a<<endl;
    cout<<"The location of a is :"<<ptr_a<<endl;
    cout<<"The location of string str is:"<<&str<<endl;
    cout<<"The location of string str is:"<<ptr_str<<endl;

}