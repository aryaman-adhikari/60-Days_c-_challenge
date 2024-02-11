#include<iostream>
using namespace std;
class test {
public:
void display(){
    cout<<"This is base"<<endl;
}
};
class exam{
public:
void display1()
{
    cout<<"This is exam base"<<endl;
}
};
class board: public test,public exam{
public:
void display2()
{
    cout<<"This is multiple"<<endl;
}
};
class mule:public board{
public:
void display3()
{
    cout<<"This is multilevel"<<endl;
}
};
int main()
{
mule obj;
obj.display();
obj.display1();
obj.display2();
obj.display3();
}