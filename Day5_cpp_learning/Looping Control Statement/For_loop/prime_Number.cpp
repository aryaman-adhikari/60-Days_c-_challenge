//WAP in c++ to find the prime number form 1 to nth number
//this program demonstrates the nested for loop as well 
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        
      c=0;
       for(j=1;j<=i;j++)
       {
        if(i%j==0)
        {
            c++;
        }
       }
       if(c==2)
       {
        cout<<"This number is prime:"<<i<<endl;

       }
    }
    return 0;
}