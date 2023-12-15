#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
void show()
{
    cout<<a;
}
test operator +(test obj)
{
    test t3;
  t3.a=a+obj.a;
  return t3;

}
test operator -(test obj)
{
    test t3;
    t3.a=a-obj.a;
    return t3;
}

test operator *(test obj)
{
    test t3;
    t3.a=a*obj.a;
    return t3;
}

test operator /(test obj)
{
    test t3;
    t3.a=a/obj.a;
    return t3;
}

test operator %(test obj)
{
    test t3;
    t3.a=a%obj.a;
    return t3;
}
};
int main()
{
test t1,t2,t3;
t1.get();
t2.get();
t3 = t1+t2;
t3.show();

t3=t1-t2;
t3.show();

t3=t1*t2;
t3.show();

t3=t1/t2;
t3.show();

t3=t1%t2;
t3.show();

}