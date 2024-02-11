#include<iostream>
#include<string>
using namespace std;
class student{
 int age;
 string name;

 public:
 student()
 {

 }
 student(int a, string b)
 {
 age=a;
 name=b;
 }
 student(student &c)
 {
    cout<<c.age<<c.name<<endl;
 }
 void display()
 {
    cout<<age <<name;
 }
};
int main()
{
 student obj(2,"Aryan");
 obj.display();
 student obj1(obj);
}