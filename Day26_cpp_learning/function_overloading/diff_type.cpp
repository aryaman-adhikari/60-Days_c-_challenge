//WAP in C++ to overload a function of different type of values
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    void over(int a, float b)
    {
   cout<<"The number is::"<<a<<" and"<<b<<endl;
    }
    void over(int a, float b, char c)
    {
     cout<<"The number is :: "<<a<<" and"<<b<<" and the character is :"<< c<<endl;
    }
 void over(int a, float b, char c, string d)
 {
  cout<<"The number is::"<<a<<" and"<<b<<" and the character is :"<<c<<" also the string is:"<<d<<endl;
 }
};
int main()
{
student obj;
obj.over(2,3.5);
obj.over(2,3.5,'a');
obj.over(2,3.5,'a',"aryan");
}