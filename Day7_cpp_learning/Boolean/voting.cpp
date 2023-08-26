//WAP in c++ to demonstrate boolean expression.
#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"Enter the age:";
   cin>>a;
   //example
   bool b=(a>=18);
   cout<<b;
   //it will return in either 0 or 1
   if(b)
   {
    cout<<endl;
    cout<<"You are eligible to vote";
   }
   else{
    cout<<endl;
    cout<<"You are not eligible to vote";
   }
}