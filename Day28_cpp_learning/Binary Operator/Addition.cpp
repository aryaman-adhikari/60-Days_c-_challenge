//WAP in C++ to demonstrate the ++ overloading
#include<iostream>
using namespace std;
class student {
int a;

public:
void getData()
{
cin >> a;

}
void show()
{
    cout<<"t1+t2=="<< a;
}

//implementation of operator overloading
student operator +(student obj)
{
    student t3;
    t3.a= a + obj.a;
    return t3;
}
//overloading ++ operator


};

int main()
{
student t1,t2,t3;
cout<<"Enter One value :"<<endl;
t1.getData();
cout<<"Enter Second value :"<<endl;
t2.getData();
t3 = t1 + t2;
t3.show();

}