#include<iostream>
using namespace std;
namespace ns1{
    char name[30];
    void get()
    {
        cout<<"Enter name :"<<endl;
        cin>>name;
        cout<<name;
    }

}

namespace ns2{
    int a=30;
}
using namespace ns1;
int main()
{
    using ns2::a;
    cout<<a<<endl;
  get();
}