#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter Value for a:"<<endl;
    cin>>a;
    try{
        if(a==1)
        {
            throw 1;
        }
        if(a==2)
        {
            throw 2.00;
        }
        if(a==3)
        {
            throw "hello";
        }
    }
    catch(...)
    {
       
  cerr<<"caught "<<endl;
 
    }
}