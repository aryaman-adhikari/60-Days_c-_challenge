//WAP in c++ to alternate the two array
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number:";
    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the elements :";
        cin>>a[i];
    }
    int n1;
    cout<<"Enter the Number:";
    cin>>n1;
    int b[n1],c[n+n1];
    for(i=0;i<n1;i++)
    {
cout<<"Enter the elements:";
cin>>b[i];
    }
   int mod=0;
    for(i=0;i<n;i++)
    {
c[mod]=a[i];
mod+=2;
    }
    mod=1;
    for(i=0;i<n1;i++)
    {
        c[mod]=b[i];
        mod+=2;
    }

    for(i=0;i<(n+n1);i++)
    {
        cout<<"\n"<<c[i];
    }
}