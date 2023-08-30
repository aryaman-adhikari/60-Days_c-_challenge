//WAP in C++ to demonstrate the simple example of function
#include<iostream>
using namespace std;
void fun();
int main()
{
   fun();
   fun();
   fun(); 
}
void fun()
{
    static int i=0;
    int j=0;

    i++;
    j++;
    cout<<i<<","<<j<<endl;
}