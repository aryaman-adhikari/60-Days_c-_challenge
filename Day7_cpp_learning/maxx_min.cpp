//WAP in c++ to find the maximum and minimun of two numbers using max and ,min.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the Numbers:";
cin>>a>>b;
cout<<max(a,b)<<" "<<"is greatest"<<endl;
cout<<min(a,b)<<" "<<"is Smallest";
}