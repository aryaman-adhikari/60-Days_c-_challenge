//WAP in c++ to demonstrate the function pointer calling indirectly
#include<iostream>
void sum(int,int);
using namespace std;
int main()
{
    int a,b;
 //creating a function pointer
 void(* funptr)(int,int);
 funptr=sum; //assigned a funptr to address of sum module.
 //we have created a function pointer named funptr which takes two integer argument
 cout<<"Enter the Numbers:"<<endl;
 cin>>a>>b;
 //now we can use funptr to call the sum indirectly
 funptr(a,b);


}
void sum(int a,int b)
{
int summ;
summ=a+b;
cout<<"The sum is::"<<summ<<endl;

}