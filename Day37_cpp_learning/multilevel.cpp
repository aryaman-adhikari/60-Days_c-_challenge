#include<iostream>
using namespace std;
class A{
protected:
int age;
char name[30];

public:
void get()
{
    cout<<"Enter the name and age :"<<endl;
    cin>>name>>age;
}
};
class B:public A{
protected:
int math,c;
public:
void gets()
{
    cout<<"Enter the marks in math and C :"<<endl;
    cin>>math>>c;
}
};
class C: public B{
    int total;
public:
void display()
{
    cout<<"Name :"<<name<<"   Age :"<<age <<endl;
    total=math+c;
    cout<<"The marks is :"<<total;
}

};
int main()
{
C obj;
obj.get();
obj.gets();
obj.display();
}