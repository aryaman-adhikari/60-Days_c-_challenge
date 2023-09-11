//single inheritance
#include<iostream>
using namespace std;
class base{
public:
void access()
{
    cout<<"It is base"<<endl;
}
};
//making single inheritance
class derived:public base{
public:
void derive()
{
    cout<<"This is derived"<<endl;
}
};
int main()
{
    derived obj;
    obj.access();
    obj.derive();
}