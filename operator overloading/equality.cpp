#include<iostream>
using namespace std;
class over{
int a;

public:
void get()
{
    cout<<"Enter a";
    cin>>a;
}
void operator !()
{
a=!a;
}
void show()
{
    cout<<a<<endl;
}
};
int main()
{
over obj1;
obj1.get();
obj1.show();
!obj1;
obj1.show();
}