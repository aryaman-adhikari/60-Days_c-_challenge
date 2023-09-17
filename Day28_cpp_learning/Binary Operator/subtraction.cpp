//WAP in C++ to demonstrate the binary subtraction overloading
#include<iostream>
using namespace std;
class student{
int a;

public:
void getData()
{
    cin>>a;
}
void show()
{
    cout<<"The subtraction is: "<<a<<endl;
}

//overloading the - binary operator
student operator -(student obj)
{
    student t3;
  t3.a=a-obj.a;
  return t3;
}
};
int main()
{
student t1,t2,t3;
cout<<"Enter the value in First Object: "<<endl;
t1.getData();
cout<<"Enter the value in Second Object: "<<endl;
t2.getData();
t3 = t1-t2;   //calling overloaded binary - operator
t3.show();

}