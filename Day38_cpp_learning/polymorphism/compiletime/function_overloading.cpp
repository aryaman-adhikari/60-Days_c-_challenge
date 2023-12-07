#include<iostream>
using namespace std;
class A{
    int a,b,c;
public:
void sum(int a, int b)
{
    cout<<"The sum is :"<<a+b<<endl;
}

void sum(int a, int b, int c)
{
    cout<<"The sum is :"<<a+b+c<<endl;
}
};
int main()
{
A obj;
obj.sum(2,3);
obj.sum(2,3,4);

}