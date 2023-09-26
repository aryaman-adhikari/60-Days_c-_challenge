#include<iostream>
using namespace std;
namespace first{
    void sayhello()
    {
        cout<<"This is first namespace"<<endl;
    }
}

namespace second{
    void sayhello()
    {
        cout<<"This is second namespace"<<endl;
    }
}
int main()
{

first::sayhello();
using namespace second;
sayhello();
}