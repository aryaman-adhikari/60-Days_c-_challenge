#include<iostream>
using namespace std;
template <class T, class U, class V=char>
class test{
 T  a;
 U b;
 V ch;
public:
test(T a, U b,V ch):a{a},b{b},ch{ch}{}

void print()
{
    cout<<a <<b<< ch<<endl;
}

 
};

int main()
{
  test <int , double>obj(2,3.44,'A');
  obj.print();

  test <int,char,double>obj2(2,'R',3.44);
  obj2.print();
}