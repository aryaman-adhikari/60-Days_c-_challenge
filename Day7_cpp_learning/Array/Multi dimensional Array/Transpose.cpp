//WAP in c++ to transpose 2 x 2 the array.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],i,j;
    cout<<"Enter the first array";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<endl;
            cout<<"Input Elements";
            cin>>a[i][j];
        }
    }

    //after transpose
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"\t"<<a[j][i];
        }
        cout<<"\n";
    }

     
}