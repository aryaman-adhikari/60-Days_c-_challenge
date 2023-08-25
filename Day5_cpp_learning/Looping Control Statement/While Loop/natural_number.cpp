//WAP in c++ to print natural number using while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    int i=1;         //initialization

    while(i<=n)         //condition
    {
        cout<<i<<endl;
        i++;                   //increment
    }
}