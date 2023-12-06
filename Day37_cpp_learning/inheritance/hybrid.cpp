#include<iostream>
using namespace std;
class student{
protected:
char name[30];
public:
void get()
{
    cout<<"Enter the name of student :"<<endl;
    cin>>name;
}
};
class mark:public student{
protected:
int math, science;
public:
void gets()
{
    cout<<"Enter the marks of math and science :"<<endl;
    cin>>math>>science;
}
};
class practical{
    protected:
    int pramark;
public:
void getss()
{
    cout<<"Enter the practical marks :"<<endl;
    cin>>pramark;
}

};
class result: public mark, public practical{
public:
int total;
void display()
{
    cout<<"The name is :"<<name<<endl;
   total=pramark+math+science;
   cout<<"The mark is :"<<total<<endl;   
}} ;
int main()
{
result obj;
obj.get();
obj.gets();
obj.getss();
obj.display();
}