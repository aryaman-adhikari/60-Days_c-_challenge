//WAP in C++ to demonstrate the function overloading
#include<iostream>
using namespace std;
class math{

public:
void add(int a,int b)
{
    cout<<"The sum of two number is:"<<a+b<<endl;
}
void add(int a,int b, int c){
    cout<<"The sum of three Number is:"<<(a+b+c)<<endl;
}
void add(int a)
{
    cout<<"single number is:"<<a<<endl;
}

};
int main()
{
    math obj;
    obj.add(5,6);
    obj.add(5,6,7);
    obj.add(2);

}