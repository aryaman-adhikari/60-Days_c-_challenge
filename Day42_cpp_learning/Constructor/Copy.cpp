#include<iostream>
using namespace std;
class test{
    int x,y;
 public:
 test(int a , int b)
 {
 x=a;
 y=b;
 }

 void show()
 {
    cout<<x<<y<<endl;
 }
 //copy 
 test(test &o)
 {
    x=o.x;
    y=o.y;

 }
};
int main()
{
    test obj=test(3,21);
    obj.show();
    test obj1(obj);
    obj1.show();

}