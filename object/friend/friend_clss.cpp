#include<iostream>
#include<string>
using namespace std;
class teacher;
class student{
 string name;
 friend class teacher;
};
class teacher{
 student s;
 public:
 void get()
 {
    cout<<"Enter the name :"<<endl;
    cin>>s.name;
 }
 void print()
 {
    cout<<s.name;
 }
};
int main()
{
 teacher obj;
 obj.get();
 obj.print();
}