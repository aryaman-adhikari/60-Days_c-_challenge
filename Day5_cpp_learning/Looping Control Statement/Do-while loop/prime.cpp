//WAP in c++ that prints the prime number from 1 to nth.
//WAP in c++ to find the prime number form 1 to nth number
//this program demonstrates the nested for loop as well 
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    i=1;
    do
    {
        
      c=0,j=1;
       do
       {
        if(i%j==0)
        {
            c++;
        }
        j++;
       }while(j<=i);
       
       if(c==2)
       {
        cout<<"This number is prime:"<<i<<endl;

       }
       i++;
    }while(i<=n);
    return 0;
}