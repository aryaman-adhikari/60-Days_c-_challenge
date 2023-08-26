//WAP in c++ to sort the given array
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
        cout<<"Enter the elements:";
        cin>>a[i];
    }
    //sorting it
    int tmp,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
cout<<"The sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        
            cout<<"\n"<<a[i];
        
    }
}