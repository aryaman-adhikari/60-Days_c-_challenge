//Overload logical not
#include<iostream>
using namespace std;
class student{
int a;
public:
void get()
{
    cin>>a;

}

void show()
{
    cout<<a<<endl;
}

//overloading the ! operator
void operator!()
{
    a=!a;
}
};
int main()
{
student t;
cout<<"Enter the value of a :"<<endl;
t.get();

cout<<"Value before overloading"<<endl;
t.show();
//calling 
!t;
cout<<"Values after calling overloaded operator is :"<<endl;
t.show();
}