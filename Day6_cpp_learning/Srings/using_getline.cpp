//WAP in C++ to demonstrate the getline function
#include<iostream>
#include<string>
using namespace std;
int main()
{
string a;
cout<<"Type your full name";
//cin>>a;  it only takes the first string

getline(cin,a); // it will take a whole line
cout<<a;
}