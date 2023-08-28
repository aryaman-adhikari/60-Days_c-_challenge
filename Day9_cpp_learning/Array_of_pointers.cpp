//WAP in c++ to demonstrate the array of pointers
#include<iostream>
using namespace std;
int main()
{
    int *p;
    int a[10];
int i;
for(i=0;i<10;i++)
{
    cout<<"input";
    cin>>a[i];
}
p=a;
cout<<"the value is:"<<*p<<endl;
cout<<"The value is:"<<*a;
}