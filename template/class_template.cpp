#include<iostream>
using namespace std;
template <class T=double>
class student{
 T real,imag;
 public:
 student(T a, T b)
 {
    real=a;
    imag=b;
 }
 student operator +(student s1)
 {
student temp;
temp.imag=imag +s1.imag;
temp.real=real +s1.real;
return temp;
 }
 student()
{}

void show()
{
    cout<<real <<imag;
}
};
int main()
{
 student<> s(2.3,3.4);
 student<double> s1(3.2,4.5);
 student<double> s3;
 s3=s+s1;
 s3.show();

 //double
//  student<double> 
}