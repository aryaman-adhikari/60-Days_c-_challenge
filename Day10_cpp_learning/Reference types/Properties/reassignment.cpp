//WAP in C++ to demonstrate that  reassignment  is not possible
#include<iostream>
using namespace std;
int main()
{
    
    int b=50,c=100;
int &a=b;
int &a=c;
cout<<a;
   
}
//NOTE that this code will give error at compile time