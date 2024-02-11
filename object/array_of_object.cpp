#include<iostream>
#include<string>
using namespace std;
class student{
 int a;
 string name;

 public:
void get()
{
    cout<<"Enter the value of a and name"<<endl;
    cin>>a;
    cin>>name;
}
void  display()
{
    cout<<a<<name<<endl;
}
};
int main()
{
 student obj[10];
 int n,i;
 cout<<"Enter the number of objects :"<<endl;
 cin>>n;
for(i=0;i<n;i++)
{
    obj[i].get();
}
for(i=0;i<n;i++)
{
    obj[i].display();
}
}