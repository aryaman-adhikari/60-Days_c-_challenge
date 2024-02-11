#include<iostream>
using namespace std;
namespace outer{
    namespace inner{
        void sigma()
        {
cout<<"this is inner"<<endl;
        }
        
    }
}

int main()
{
   namespace o_ns=outer;
   namespace i_ns=outer::inner;

   i_ns::sigma();
}