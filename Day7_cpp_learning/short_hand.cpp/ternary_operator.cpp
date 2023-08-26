//WAP in c++ that demonstrates the example of ternary operator
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two Numbers:";
    cin>>a>>b;
    string c=(a>b)?"a is greater":"b is greater";
    cout<<c;
}