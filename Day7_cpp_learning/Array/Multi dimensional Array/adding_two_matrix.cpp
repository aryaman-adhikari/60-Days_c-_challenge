//WAP in c++ to add two 2 x 2  matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the elements:";
            cin>>a[i][j];
        }
    }

cout<<"Enter the second array"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the elements:";
            cin>>b[i][j];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            cout<<"\t"<<c[i][j];
        }
        cout<<"\n";
    }
}