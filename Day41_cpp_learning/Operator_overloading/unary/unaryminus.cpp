#include<iostream>
using namespace std;
class test{
    int a,b;
public:
void get()
{
    cin>>a>>b;
}
void show()
{
    cout<<a<<b;
}
void operator -()
{
  a=-a;
  b=-b;
}

};
int main()
{
test t;
cout<<"Enter a and b:"<<endl;
t.get();
cout<<"Before :"<<endl;
t.show();
-t;
cout<<"After"<<endl;
t.show();

}