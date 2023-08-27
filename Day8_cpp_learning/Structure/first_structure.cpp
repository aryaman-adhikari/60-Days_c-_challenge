//WAP in c++ to demonstrate the structure in c++ 
#include<iostream>
#include<string>
using namespace std;

struct student{  //Here name of structure is student
int a=10;          //int structure member
string aryan="Aryaman Adhikari";    //string structure member

};        //structure defination must enclosed in semicolon
int main()
{
   // since structure is a user defined variable we can declare it and use it as a abstract variable.
   //Let's create a structure variable
   struct student std;

   // we can use std as accessor for members of structure . Because here std variable is created with the student type.

   //printing the values

   cout<<"Age:"<<" "<<"Name:"<<endl;
   cout<<std.a<<"   "<<std.aryan;

}