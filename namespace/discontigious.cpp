#include<iostream>
namespace ns{
    int a=5;
}
namespace ns{
    int b=5;
}
int main()
{
    using namespace std;
cout<<ns::a;
    cout<<ns::b;

}