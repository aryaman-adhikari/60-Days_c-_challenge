#include<iostream>
using namespace std;
class A{
    protected:
  int a,b;
  public:
  void get()
  {
    cout<<"Enter the value of a and b first :"<<endl;
    cin>>a>>b;

  }  
};
class B{
    protected:
int c,d;
public:
void gets()
{
    cout<<"Enter the value of c and d :"<<endl;
    cin>>c>>d;

}
};

class C:public A, public B{
int sum;
public:
void total()
{
    sum=a+b+c+d;
    cout<<"The Total is :"<<sum;
}
};
int main()
{
C obj;
obj.get();
obj.gets();
obj.total();

}