//WAP in C++ to demonstrate type conversion ambiquity
#include<iostream>
using namespace std;
void fun(int );
void fun(double );
int main()
{
fun(2);
fun(2.3);
}
void fun(int i)
{
cout<<i<<endl;
}
void fun(double j)
{
    cout<<j<<endl;
}