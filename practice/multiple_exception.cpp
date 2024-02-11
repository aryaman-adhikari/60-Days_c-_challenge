#include<iostream>
using namespace std;

void test(int a)
{
    try{

 if(a==0)
  {
    throw a;
  }
  if(a==1)
{
 throw 1.0;
}

if(a==2)
{
    throw string("Can't be two");
}
 
   }
  catch(int &a)
  {
    cerr<<"Cannot be Zero"<<endl;
  }
  catch(double &em)
  {
    cerr<<"Cannot be one"<<endl;
  }

  catch(string name)
  {
    cerr<<"Cannot be two"<<endl;
  }
}
int main()
{
  test(0);
  test(1);
  test(2);
}