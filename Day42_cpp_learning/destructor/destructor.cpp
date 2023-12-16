#include<iostream>
using namespace std;
class test{
    int real,imag;
 public:
 test(int a, int b)
 {
    real=a;
    imag=b;
 }
 void show()
 {
    cout<<real<<"+"<<imag<<"i"<<endl;
 }
~test()
{
    cout<<"Destructor"<<endl;
}
};
int main()
{
    test obj(3,4);
    obj.show();
    test obj1(3,4);
    obj1.show();

    return 0;

}