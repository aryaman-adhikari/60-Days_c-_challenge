#include<iostream>
#include<string>
using namespace std;
int test()
{
  try{
    throw "hello";
  }
  catch(const char *)
  {
    cerr<<"first error "<<endl;
    throw;
  }
  return 0;
}
int main()
{
    cout<<"Start"<<endl;
 try{
    test();
 }
 catch(const char *)
 {
    cerr<<"Second error"<<endl;
 }
 return 0;
}