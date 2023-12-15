#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
int  operator >(test obj)
{
    if(a>obj.a)
    {
        return 1;
    }
    else
    return 0;
}

int  operator <(test obj)
{
    if(a<obj.a)
    {
        return 1;
    }
    else
    return 0;
}


int  operator >=(test obj)
{
    if(a>=obj.a)
    {
        return 1;
    }
    else
    return 0;
}

int  operator <=(test obj)
{
    if(a<=obj.a)
    {
        return 1;
    }
    else
    return 0;
}
};
int main()
{
 test t1,t2;
 t1.get();
 t2.get();
 if(t1>t2){
    cout<<"greater"<<endl;
 }
 if(t1<t2){
    cout<<"less"<<endl;
 }
 if(t1>=t2){
    cout<<"greater than equal to"<<endl;
 }
 if(t1<=t2){
    cout<<"less than equal to"<<endl;
 }
}