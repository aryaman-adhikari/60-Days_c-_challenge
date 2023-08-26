//WAP in c++ to modify the array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
     int i,a[100];
     for(i=0;i<n;i++)
     {
        cout<<"Input elements";
        cin>>a[i];
     }
     int loc,ele;
     cout<<"Enter the location and it's element to modify";
     cin>>loc>>ele;
     a[loc]=ele;
     for(i=0;i<n;i++)
     {
        cout<<"\n"<<a[i];
     }

}