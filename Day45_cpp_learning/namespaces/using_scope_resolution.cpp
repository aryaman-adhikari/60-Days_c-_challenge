#include<iostream>
using namespace std;
namespace ns1
{
    void greet()
    {
        cout<<"This is ns1"<<endl;
    }
}
namespace ns2
{
    void greet()
    {
        cout<<"This is ns2"<<endl;
    }

}
int main()
{
  ns1::greet();
  ns2::greet();
}