//WAP in c++ that demonstrates the reference variable of non-const variable.
#include<iostream>
using namespace std;
int main()
{
    int a=50;
    int &b=a;
    cout<<"The value is:"<<b;
    //here b is alias for a but &b holds the address of a


    return 0;
}