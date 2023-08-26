//WAP that demonstrates the use of cmath in c++ program
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a Number:";
    cin>>a;
    double square=sqrt(a);
    cout<<square<<endl;
    cout<<"Enter a Number:";
    cin>>a;
    double logarithm=log(a);
    cout<<logarithm<<endl;
    cout<<"The rounded off Number is::"<<round(logarithm);
    

}
