//Inheritance with base and derived class
#include<iostream>
using namespace std;
class base{
private:
int data;   //it is not accessible within anywhere except base body 
public:
void publ_func(){
    cout<<"It is accessible"<<endl;  //it is accessible everywhere
}
protected:
void prote_func()       //it is accessible within member function of derived
{
    cout<<"Accessible within the derived class member function only"<<endl;
}
};
class derived:public base{
public:
void membe_func()
{
    prote_func();
}

};
int main()
{
derived obj;
obj.publ_func();
obj.membe_func();
}