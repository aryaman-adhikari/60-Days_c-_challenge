//WAP in C++ to demonstrate the new and delete 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of Number:";
    cin>>n;
    int i;
    int *p=new int[20];
    for(i=0;i<n;i++)
    {
        cout<<"Input elements:"<<endl;
        cin>>p[i];
    }
    //now printing the elements
    for(i=0;i<n;i++)
    {
        cout<<p[i];
    }
    //deallocating the memory space 
    delete p;
}