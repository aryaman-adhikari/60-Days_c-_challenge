#include<iostream>
using namespace std;
void fun(int );
// void fun(int &);
int main()
{
   int  c=10;
    fun(c);
}
void fun(int a)
{
    cout<<"The value is:"<<a<<endl;
}
// void fun(int &b)
// {
//     cout<<"The value of b is:"<<b<<endl;
// }


