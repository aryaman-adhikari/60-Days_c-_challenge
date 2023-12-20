#include<iostream>
using namespace std;
namespace ns1{
    void set();
    
    
    class printer{
      public:
      void get();

    };
}
void ns1::set()
{
    cout<<"This is ns1"<<endl;
}
void ns1::printer::get()
{
cout<<"This is ns1 printer"<<endl;
} 
int main()
{
 ns1::printer obj;
 ns1::set();
 obj.get();
}