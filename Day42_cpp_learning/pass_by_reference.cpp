#include<iostream>
using namespace std;
class test{
    int real ,imag;
 public:
void getdata(int a, int b);
void showdata();
void getobj(test &obj, test &obj1);
};
void test::getdata(int a,int b)
{
    real=a;
    imag=b;
}
void test::showdata()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
void test:: getobj(test &obj,test &obj1)
{
    real=obj.real + obj1.real;
    imag=obj.imag +obj1.imag;
}
int main()
{
 test t1,t2,t3;
 t1.getdata(3,5);
 t1.showdata();
 t2.getdata(4,5);
 t2.showdata();
 t3.getobj(t1,t2);
 t3.showdata();

}