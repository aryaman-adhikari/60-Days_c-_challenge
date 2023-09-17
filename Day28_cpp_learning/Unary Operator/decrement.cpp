//Demonstrate decrement operator
#include<iostream>
using namespace std;
class student{
int a;
public:
student()
{
    a=0;

}
void show()
{
    cout<<a<<endl;
}

//overloading the pre decrement
void operator--()
{
    a=a-1;
}

//overloading the post decrement
void operator--(int)
{
  
    a=a-1;
}

};
int main()
{
student t;
cout<<"Value before is :";
t.show();
--t;  //calling the operator overloading
cout<<"Value after pre decrement: "<<endl;
t.show();
cout<<"Value before post decrement: "<<endl;
t.show();
t--;       //calling
cout<<"Values after post decrement :"<<endl;
t.show();
}