#include<iostream>
using namespace std;
class B;
class A{
int a;

friend class B;
};
class B{
    int b;
   
    public:
 void display(A obj)
 {
    obj.a=50;
    b=obj.a;
    
       
 }
 void disp()
 {
    cout<<"The value is :"<<b;
 }

};
int main()
{
A o;
B ob;
ob.display(o);
ob.disp();
}