#include<iostream>
using namespace std;
class test{
    int a,b;
 public:
 test(int x, int y=2)
 {
 a=x;
 b=y;

 cout<<a<<b<<endl;
 }

};
int main()
{
test obj(2);
test objj(3,4);

}