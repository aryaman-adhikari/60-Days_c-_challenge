#include<iostream>
using namespace std;
class A{
public:
void a()
{
    cout<<"This is A"<<endl;
}
};
class B:public A{
    public:
    void b()
    {
        cout<<"This is B"<<endl;
    }
};

class C: public A{
    public:
    void c()
    {
        cout<<"This is C"<<endl;
    }
};
int main()
{
C obj;
obj.a();
B obj1;
obj1.a();

}