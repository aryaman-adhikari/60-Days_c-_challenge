#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
void operator  +=(test obj)
{
    a=a+obj.a;
}
void operator -=(test obj)
{
    a=a-obj.a;
}

void operator *=(test obj)
{
    a=a*obj.a;
}
void operator/=(test obj)
{
    a=a/obj.a;
}
void operator %=(test obj)
{
    a=a%obj.a;
}
void show()
{
    cout<<a<<endl;
}
};
int main()
{
    test t1,t2;
    t1.get();
    t2.get();
    t1+=t2;
    t1.show();
    t1-=t2;
    t1.show();
    t1*=t2;
    t1.show();
    t1/=t2;
    t1.show();
    t1%=t2;
    t1.show();

 
}