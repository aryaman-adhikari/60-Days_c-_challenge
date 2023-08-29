//WAP in C++ to demonstrate the error while using the differ pointer and value.
#include<iostream>
using namespace std;
int main()
{
    int *p; //declared a pointer of int type
    float a=5;
    p=&a;
    cout<<a<<endl;
    return 0;

}

//remember that this program gives the error