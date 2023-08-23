//WAP in C++ that demonstrate the bitwise expression
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    //it's binary value is 0011
    //so left shifting it we get,
    cout<<(a<<2)<<endl; //it gives the output of 12 since it becomes 1100
    cout<<(a>>2)<<endl;//it gives zero since it becomes 0000
    return 0;
}