//WAP in c++ to demonstrate the reference variable as parameter in function
#include<iostream>
void sum(int &,int &);
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of A and B";
    cin>>a>>b;
    sum(a,b);
    
}
void sum(int &a,int &b)
{
    int summed=a+b;
    cout<<"The value is:"<<summed;
}