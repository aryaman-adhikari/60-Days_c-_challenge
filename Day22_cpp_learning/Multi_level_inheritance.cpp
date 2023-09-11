//multiple inheritance in C++
#include<iostream>
using namespace std;
class animal{
public:
void anim()
{
    cout<<"This is main base class"<<endl;
}
};
//creating first derived class
class dog:public animal{
public:
void dogg()
{
    cout<<"This is dog derived class"<<endl;
}
};

//creating second derived class from dog base class(dog is base for this derived class)
class breed:public dog{
public:
void bred()
{
    cout<<"This is breed x2 derived class"<<endl;
}
};
int main()
{
    breed obj;
    obj.bred();
    obj.dogg();
    obj.anim();

}