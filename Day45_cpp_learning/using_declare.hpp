#include<iostream>
using namespace std;
namespace ns1{
     void print()
     {
        cout<<"Print from ns1"<<endl;
     }
     void greet()
     {
        cout<<"Greet from ns1"<<endl;
     }
}

namespace ns2{
     void print()
     {
        cout<<"Print from ns2"<<endl;
     }
     void greet()
     {
        cout<<"Greet from ns2"<<endl;
     }
}