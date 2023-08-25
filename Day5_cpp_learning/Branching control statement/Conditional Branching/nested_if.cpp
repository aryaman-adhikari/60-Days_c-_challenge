//WAP in c++ to demonstrate the example of nested if
//find greatest between three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three Numbers :";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"The greatest is:"<<a<<endl;
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            cout<<"The greatest is:"<<b<<endl;
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            cout<<"The greatest is:"<<c<<endl;
        }
    }
      return 0;
}