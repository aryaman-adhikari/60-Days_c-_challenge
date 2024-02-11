#include<iostream>
using namespace std;
int a=10; //global namespace 

namespace ns{
    class impact;//declering

    namespace ns1{
class printer {
  public:
  void display(){
    cout<<"this is ns -ns1 namespace"<<endl;
  }
    };
    

  
    }
}


    //define
    class ns::impact{  //defining
 public:
 void display();
 
 
    };
    void ns::impact::display()
    {
        cout<<"This is impact ns namespace"<<endl;
    }
int main()
{
    ns::ns1::printer o;
    o.display();
    using ns::ns1::printer ;
    

    ns::impact a;
    a.display();

    cout<<::a;
}