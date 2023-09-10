//base and derived inheritance in C++
#include<iostream>
using namespace std;
class base{
public:
int data;
public:
void functi()
{
    cout<<"HELLO"<<endl;
    cout<<data<<endl;
}
};
//creating the derived class
class derived:private base{
public:
void derived_method()
{
    
    data=42;   //this is allowed inside derived class
    functi();  //this is allowed inside derived class


}

};
int main()
{
 derived notacce;
 notacce.derived_method();
//  notacce.data=43;
//  notacce.functi();  //it is not allowed since the derived class is in private
}