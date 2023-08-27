//WAP in c++ to demonstrate the multiple structure variable in c++
#include<iostream>
#include<string>
using namespace std;

struct student{
    int age;
    string name="Aryan";
    string gender="Male";
}stde,std1,std2;
int main()
{
//let's access it
cout<<"Age:"<<"  "<<"Name:"<<"  "<<"Gender:"<<endl;
cout<<stde.age<<"    "<<std1.name<<"   "<<std2.gender;
}