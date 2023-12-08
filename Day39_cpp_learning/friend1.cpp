#include<iostream>
using namespace std;
class B;
class A{
char name[30];
friend class B;
};
class B{
A obj;
public:
void display()
{
    cout<<"Enter name: "<<endl;
    cin>>obj.name;
    cout<<"The name is :"<<obj.name<<endl;

}
};
int main()
{
    B ob;
    ob.display();
}