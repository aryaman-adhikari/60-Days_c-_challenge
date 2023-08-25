//WAP in c++ that demonstrates the example of ladder if
//percentage calculation

#include<iostream>
using namespace std;
int main()
{
    float mark;
    cout<<"Enter the total Marks :";
    cin>>mark;

    if(mark>=100 || mark<0)
    {
        cout<<"INVALID";

    }
    else if(mark>=90&&mark<100)
    {
        cout<<"A+";
    }
    else if(mark>=80&&mark<90)
    {
        cout<<"A";
    }
    else if(mark>=70&&mark<80)
    {
        cout<<"B+";

    }
    else if(mark>=60&&mark<70)
    {
        cout<<"B";
    }
    else 
    {
        cout<<"C";
    }
      return 0;
    
}