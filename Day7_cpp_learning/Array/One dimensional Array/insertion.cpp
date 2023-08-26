//WAP in c++ to insert new element in a spcified location .
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    int a[100],i;
    for(i=0;i<n;i++)
    {
        cout<<"Input elements:";
        cin>>a[i];
    }
    int nele,loc,tmp;
    cout<<"Enter the location and value to insert::";
    cin>>loc>>nele;
    for(i=loc;i<n;i++)
    {
        tmp=a[i];
        a[i]=nele;
        nele=tmp;
    }
    a[n]=nele;
    for(i=0;i<=n;i++)
    {
        cout<<"\n"<<a[i];
    }

}