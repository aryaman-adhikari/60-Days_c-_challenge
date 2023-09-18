//overload >> and <<
// We need to know that >> and << always works with predefined data types . But here we are using it with user defined datatype (i.e class) .So , we are using friend keyword .
#include<iostream>
using namespace std;
class student{
int a;
public:
friend void operator>>(istream &in, student &s)
{
in>>s.a;

}

friend void operator<<(ostream &out, student &s)
{
out<<s.a<<endl;
}
};
int main()
{
student s,s2;
cout<<"Enter the data for s one :"<<endl;
cin>>s;   //calling
cout<< "Enter the data for s two :"<<endl;
cin>>s2;  //calling 
cout<<"The value of s is :"<<s;
    //calling
cout<<"The value of s2 is :"<<s2;
   //calling 

}