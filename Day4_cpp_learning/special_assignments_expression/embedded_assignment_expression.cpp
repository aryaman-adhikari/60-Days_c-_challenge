//WAP that demonstrate the embedded assignment expression
//embedded assignment expression is an assignment expression in which assignment expression is embedded into another assignment expression
#include<iostream>
using namespace std;
int main()
{
    int a,b;
 a=10+(b=20);
    cout<<a<<endl;
    return 0;
}