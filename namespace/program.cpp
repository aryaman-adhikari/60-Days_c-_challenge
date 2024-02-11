#include<iostream>
#include"names.hpp"
using namespace std;
namespace ns1{
    void greet()
    {
        cout<<"This is ns1"<<endl;
    }
}

namespace ns2{
    void greet()
    {
        cout<<"This is namespace two"<<endl;
    }
}
int main()
{
    using namespace aryan;
    
    ns1::greet();
    ns2::greet();

    employee obj;
    obj.display();
    
//decleration
 using jenish::greet;
 greet();   

    return 0;

}