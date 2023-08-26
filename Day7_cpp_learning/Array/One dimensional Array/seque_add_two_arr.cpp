//WAP in c++ to take two one d array from user and add sequentially to another array
#include<iostream>
using namespace std;
int main()
{
    int n,n1;
    cout<<"Enter the Number size of first array:";
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
cout<<"Enter the elements:";
cin>>a[i];
    }

    cout<<"Enter the size of second array:";
    cin>>n1;
    int b[n1],c[n+n1];
    for(i=0;i<n1;i++)
    {
        cout<<"Enter the elements";
        cin>>b[i];
    }
    for(i=0;i<(n+n1);i++)
    {
        if(i<n)
        c[i]=a[i];

        else
        c[i]=b[i-n];
    }

    for(i=0;i<(n1+n);i++)
    {
        cout<<"\n"<<c[i];
    }

}

