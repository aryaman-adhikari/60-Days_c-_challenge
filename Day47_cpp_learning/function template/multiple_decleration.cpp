#include<iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return a+b;
}
template <typename M=int>
M add(M a, M b, M c)
{
    return a+b+c;
}
int main()
{
    cout<<add<int>(2,3)<<endl;
    cout<<add<float>(2.3,3,4)<<endl;
    return 0;
}
