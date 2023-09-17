//overloading increment operator
#include<iostream>
using namespace std;
class student{
int a=0;
public:
void show()
{
    cout<<a<<endl;
}

//preincrementing
void operator++()
{
    a=a+1;
}

//post incrementing
void operator++(int)
{
    a=a+1;
}
};
int main()
{
student t;
cout<<"Value before increment:"<<endl;
t.show();
cout<<"After pre incrementing: "<<endl;
++t;
t.show();
cout<<"Before post incrementing:"<<endl;
t.show();
cout<<"After post incrementing:"<<endl;
t++;
t.show();

}