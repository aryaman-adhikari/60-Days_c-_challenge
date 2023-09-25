//WAP in C++ to demonstrate the abstraction using abstract classes.
#include<iostream>
using namespace std;
class shape
{
public:
virtual void draw()=0;      //pure virtual function decleration
};

//draw implementation must be provided in the derived classes
class rectangle: public shape{
public:
void draw()override{
    cout<<"This is rectangle remote :"<<endl;
}
};

class circle: public shape{
public:
void draw()override{
    cout<<"This is Circle remote :"<<endl;
}
};
int main()
{
rectangle rec;
circle cir;
rec.draw();
cir.draw();

return 0;
}