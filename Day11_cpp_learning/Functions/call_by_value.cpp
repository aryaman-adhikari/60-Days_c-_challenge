//WAP in C++ to demonstrate the call by value function
#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
    int a,b;
    cout<<"Enter the Numbers:";
    cin>>a>>b;
    sum(a,b);
    return 0;

}
void sum(int a, int b)
{
    int summed=a+b;
    cout<<"The sum is::"<<summed<<endl;
}