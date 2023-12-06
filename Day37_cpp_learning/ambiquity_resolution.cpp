// IN multiple inheritance there are more than one base classes and if there is any similar member function in both bases then in derived class compiler gets confused about which function to call. and ambiquity occurs. To resolve this we use :: operator.

#include<iostream>
using namespace std;
class base1{
public:
void hello()
{
    cout<<"THis is base one :"<<endl;
}
};
class base2{
public:
void hello()
{
    cout<<"This is base 2 "<<endl;
}
};

class derived: public base1, public base2{
public:

};
int main()
{
derived obj;
obj.base1::hello();
obj.base2::hello();
}