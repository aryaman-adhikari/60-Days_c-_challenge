#include<iostream>
using namespace std;
class A{

public:
void get()
{
    cout<<"This is base"<<endl;
}
};
class b: public A{
public:
void display_name()
{
    cout<<"The name is aryan"<<endl;
}
};
class c: public A{
public:
void display_age(){
    cout<<"The Age is 20";
}
};
int main()
{
 b obj;
 c oj;
 obj.get();
 obj.display_name();
 oj.display_age();
}