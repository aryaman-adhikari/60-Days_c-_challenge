#include<iostream>
#include<string>
using namespace std;
struct student{
 int age;
 string name;

 void get()
 {
    cout<<"Enter age and name :";
    cin>>age>>name;
 }
 void display()
 {
    cout<<age<<name<<endl;
 }
};
int main()
{
 student s[3];
 int i;
 for(i=0;i<3;i++)
 {
    s[i].get();
 }
 for(i=0;i<3;i++)
 {
    s[i].display();
 }
}