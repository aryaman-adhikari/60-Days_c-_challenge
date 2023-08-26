//WAP in c++ to multiply two matrix
#include<iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2,i,j,a[50][50],b[50][50],c[50][50];
    cout<<"Enter the first row and column";
    cin>>r1>>c1;
    cout<<"Enter the second row and column";
    cin>>r2>>c2;
    

    //check whether it is multipliable or not
    if(c1==r2)
    {
        
    cout<<"Enter first array";
    cout<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Input Elements"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter Second array";
    cout<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Input Elements"<<endl;
            cin>>b[i][j];
        }
    }
    int sum,k;

    //now multiplying
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    //printing it
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            
            cout<<"\t"<<c[i][j];
        }
        cout<<"\n";
    }





    }
    else{
        
        cout<<"NOT MULTIPLICABLE";
        cout<<endl;
    }
}