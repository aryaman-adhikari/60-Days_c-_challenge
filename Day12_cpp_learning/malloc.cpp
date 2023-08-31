//WAP in C++ to demonstrate the malloc
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of N:";
    cin>>n;
    int *p=(int *)malloc(n*sizeof(int));
    //allocation of the memory in the heap
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Input elements:";
        cin>>p[i];
    }
    //printing
    for(i=0;i<n;i++)
    {
        cout<<p[i];
    }
    free(p);

}