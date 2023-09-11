#include<iostream>
using namespace std;
class animal{
public:
void ani()
{
    cout<<"This is base"<<endl;
}
};

class dog:public animal{
public:
void ani()
{
    cout<<"THis is dog"<<endl;
}
};
int main()
{
dog obj;
obj.ani();
//for thefunction of class Animal
obj.animal::ani();
}