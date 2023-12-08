#include<iostream>
using namespace std;
class A{
int real,imag;

friend void display(A obj);
};
void display(A obj)
{
    cout<<"Enter the real and imag:  "<<endl;
    cin >>obj.real>>obj.imag;
 int sum= obj.real + obj.imag;
 cout<<sum;
}

int main()
{
 A obj;
 
 display(obj);
}
