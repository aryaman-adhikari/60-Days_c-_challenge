//WAP in c++ to search elements using Binary searching
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
        cout<<"Input Elements:";
        cin>>a[i];
    }
    //sorting at first.
    int j,tmp;
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
    int sear;
    cout<<"Enter searching element:";
    cin>>sear;
    //now it's sorted
    int flag=0,mid,beg=0,end=n-1,loc;
    while(flag==0&&beg<=end)
    {
        mid=(beg+end)/2;
        if(sear==a[mid])
        {
            flag=1;
            loc=mid;
        }
        else if(sear<a[mid])
        {
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(flag==1)
    {
        cout<<"The searched element is "<<" "<<a[loc]<<"at "<<loc<<" location"<<endl;
    }
    else{
        cout<<"Not Found";
    }
}