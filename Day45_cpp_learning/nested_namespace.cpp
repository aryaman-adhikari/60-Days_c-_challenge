#include<iostream>
using namespace std;
namespace outer{
    int out=20;
    namespace inner{


        int a=30;
    }
}
int main()
{
  using outer::out;
  cout<<out<<endl;

  using outer::inner::a;
  cout<<a<<endl;
}