//WAP in c++ to demonstrate sequential searching
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
      int sear,flag=0,loc;
      cout<<"Enter the element to search:";
      cin>>sear;
      for(i=0;i<n;i++)
      {
        if(sear==a[i])
        {
            loc=i;
            flag=1;
        }
      }
      if(flag==1)
      {
        cout<<"The searched element is "<<a[loc]<<" at "<<loc;

      }
      else{
        cout<<"Not found";
      }

}