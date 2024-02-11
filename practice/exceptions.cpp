#include<iostream>
using namespace std;
int func(int ,int);
int main()
{
 int a,b;
 cout<<"Enter a and b:"<<endl;
 cin>>a>>b;
 try{
   func(a,b); 
 }
  
  catch(int &em)
  {
    cerr<<"Can't be equal"<<endl;
  }

}
int func(int a,int b)
{
   
     if(a==b)
     {
        throw a;
     }
     cout<<"Are not equal"<<endl;


return 0;
}