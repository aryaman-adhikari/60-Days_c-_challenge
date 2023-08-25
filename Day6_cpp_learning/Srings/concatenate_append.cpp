//WAP in c++ to add two strings using append function
#include<iostream>
#include<string>
using namespace std;
int main()
{
 string a,b;
 cout<<"Enter the first string:";
 cin>>a;
 cout<<"Enter the second string:";
 cin>>b;

 //now adding using append 
 string added=a.append(b);
 cout<<added;
 return 0;
}