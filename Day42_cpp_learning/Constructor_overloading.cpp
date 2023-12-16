#include<iostream>
using namespace std;
class test{
int a,b;
public:
test()
{
    cout<<"this is default"<<endl;
}
test(int x, int y)
{
    a=x;
    b=y;
    cout<<a<<b<<endl;
}
test(int x, int y, int z, int u)
{
  cout<<x<<y<<z<<u<<endl;
}
};
int main()
{
    test o; //automatically default constructor
 test obj=test(2,3);

 test objj(2,3,4,5);
 

}