//WAP in C++ to demonstrate the call by reference
#include<iostream>
void sum(int *,int *);
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    sum(&a,&b);
}
void sum(int *a,int *b)
{
    int summed=*a+*b;
    cout<<"The sum is::"<<summed<<endl;
}