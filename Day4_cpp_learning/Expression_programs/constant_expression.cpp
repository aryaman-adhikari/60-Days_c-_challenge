//WAP in c++ that demonstrates the constant expression 
#include<iostream>
using namespace std;
int main()
{
    const int a=5;//giving constant values to a and b
    const int b=6;
         //constant expression example
         int result=a*b+5;//the value of a and b is constant because it is fixed and it's values are known at compile time

         cout<<"The reuslt is:"<<result<<endl;



}