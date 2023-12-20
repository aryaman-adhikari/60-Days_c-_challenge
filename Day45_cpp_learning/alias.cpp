#include<iostream>
using namespace std;
namespace name{
    void get()
    {
        cout<<"THis is namespace"<<endl;
    }
    namespace name1{
        void get()
        {
            cout<<"This is nested"<<endl;   
     }
    }
}
namespace ns=name;
namespace ns1= name::name1; //either name or alias name i.e ns
int main()
{
 ns::get();
 ns1::get();
}