//WAP in c++ to concatenate two strings.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cout<<"Enter first string:"<<endl;
    cin>>a;
    cout<<"Enter Second string:"<<endl;
    cin>>b;

    //concatenating them
    a=a+b;
    cout<<a;
    return 0;
}