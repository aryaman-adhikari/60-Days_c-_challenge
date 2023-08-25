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
    while(i<=n)
    {
        
      c=0,j=1;
       while(j<=i)
       {
        if(i%j==0)
        {
            c++;
        }
        j++;
       }
       if(c==2)
       {
        cout<<"This number is prime:"<<i<<endl;

       }
       i++;
    }
    return 0;
}