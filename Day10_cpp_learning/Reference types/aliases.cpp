//WAP in C++ to demonstrate the reference to alises
#include<iostream>
using namespace std;
int main()
{ 
    int a=50;
    int &b=a;
    int &c=a;
    //Here both b and c holds the value of a.
    cout<<"The value is:"<<b<<endl;
    cou<<"The value is :"<<c<<endl;


    return 0;
    }