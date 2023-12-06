#include<iostream>
using namespace std;
class A{
char name[30]="Aryaman";
public:
 void display()
 {
    cout<<"The name is :"<<name<<endl;
 }
};

class B: public A{
public:
void display()
{
  A::display();
}
};
int main()
{
B obj;
obj.display();
}