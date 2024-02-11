#include<iostream>
using namespace std;
class A{
    protected:
    int a1,b1;
public:
A(){}
A(int a, int b)
{
 a1=a;
 b1=b;
}
};
class B :public A{
    int c1,d1;
 public:
 B(){}
 B(int a,int b,int c,int d):A(a,b)
 {
 
 c1=c;
 d1=d;
 }
 void show()
 {
    cout<<a1<<b1<<c1<<d1;
 }
};
int main()
{
 B obj(10,20,30,40);
 obj.show();
}