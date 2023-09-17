//WAP to demonstrate overloading of unary minus
#include<iostream>
using namespace std;
class student{
int a,b;

public:
void getData()
{
    cin>>a;
    cin>>b;
}
void show()
{
    cout<<a<<endl;
    cout<<b<<endl;
}
//overloading the unary minus operator
void operator-()
{
 a=-a;
 b=-b;
}
};
int main()
{
student t1;
cout<<"Enter the value of a and b: ";
t1.getData();
cout<<"Valued before unary operation "<<endl;
t1.show();
-t1;   //calling the overloading operator
cout<<"Values after Unary Operation"<<endl;
t1.show();

}