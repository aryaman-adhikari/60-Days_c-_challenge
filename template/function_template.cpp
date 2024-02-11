#include<iostream>
using namespace std;
template <typename T=float>
T add(T a,T b)
{
 T c=a+b;
 return c;
}
template <typename T>
T add(T a, T b, T c)
{
    return a+b+c;
}
int main()
{
 cout<<add<int>(2,3);
 cout<<add<int>(2,3,4);
 cout<<add<>(2.2f,5.2f);
 cout<<add<double>(2.3,2.3);
}