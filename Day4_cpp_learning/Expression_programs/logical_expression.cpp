//WAP that demonstrates the logical expression
#include<iostream>
using namespace std;
int main()
{
    int a=2,b=3,c=4;
    bool x=(a>b)||(b<c);  //one is true that's why it gives true(1)
    bool y=(a>b)&&(a>c);  //it is(both needs to be true) false it gives 0
    bool z=(a>b)||(a>c);  //both is false that's why it gives 0

    cout<<x<<endl<<y<<endl<<z<<endl;
}