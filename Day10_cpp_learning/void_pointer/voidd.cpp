//WAP in c++ to demonstrate the void pointer in c++
#include<iostream>
using namespace std;
int main()
{
    void *ptr,*pttr;
    int a=5;
    float b=6;

    //since void pointer can points to any data type .
    ptr=&a;
    pttr=&b;
    cout<<"The adderss of a is"<<ptr<<endl;
        cout<<"The adderss of a is"<<&a<<endl;
    cout<<"The address of b is"<<pttr<<endl;
        cout<<"The adderss of b is"<<&b<<endl;
        return 0;
}