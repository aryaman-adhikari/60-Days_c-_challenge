//WAP in C++ to find the factorial of a given number using recursion
#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,x;
    cout<<"Enter the Number:";
    cin>>n;

   x= fact(n);
   cout<<"The factorial of a given Number is::"<<x<<endl;
    return 0;
}
int fact(int n)
{
    
    if(n<1)
    {
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}