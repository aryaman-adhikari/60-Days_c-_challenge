#include<iostream>
using namespace std;
class test{
 int a;
 public:
 test()
 {
    a=3;
 }
 void show()
 {
    cout<<a<<endl;
 }
 void operator--(){
    //pre increment
    a=a-1;
 }

 void operator --(int)
 {
    //post increment
    a=a-1;
 }
};
int main()
{
    test t;
    t.show();
    --t;
    t.show();
    t--;
    t.show();
}