//WAP in c++ to perform deletion
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;

    int i,a[100];
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements:";
        cin>>a[i];
    }
    int loc;
    cout<<"Enter the Location to delete:";
    cin>>loc;
    for(i=loc;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<"\n"<<a[i];
    }
}