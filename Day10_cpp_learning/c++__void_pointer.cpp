//WAP in c++ to demonstrate the void pointer 
//Note that in C++ we need to typecast the void pointer before assign it to the other pointers.
#include<iostream>
using namespace std;
int main()
{
    void *ptr;
    int *p;
    int a=5;
    //let's assign the value with void pointer
    ptr=&a;
    //now we need typecasting with the syntax (datatype *)
    p=(int*)ptr;
    cout<<"The value is::"<<*p<<endl;
    

}