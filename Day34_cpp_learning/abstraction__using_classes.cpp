//WAP in C++ to demonstrate the abstraction using classes
#include<iostream>
using namespace std;
class student{
private:
int a=5;

public:
void dis()
{
    cout<<"This is dis and it's value is "<<a<<endl;
}
};
int main()
{
student obj;
obj.dis();
}