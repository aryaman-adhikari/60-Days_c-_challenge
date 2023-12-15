#include<iostream>
using namespace std;
class test
{
int a;
public:
void get()
{
    cin>>a;
}

void operator !=(test obj)
{
  if(a!=obj.a)
  {
    cout<<"Not equal"<<endl;
  }
  else{
    cout<<"Equal"<<endl;
  }
}
};
int main()
{
test t1,t2;
t1.get();
t2.get();

t1!=t2;

}