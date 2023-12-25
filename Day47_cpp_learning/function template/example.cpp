#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
    }
int main()
{
  cout<<add<int>(2,3)<<endl;
  cout<<add<float>(2.3f,4.5f)<<endl;
  cout<<add<double>(4.3333,5.4444)<<endl;
}