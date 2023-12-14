#include<iostream>
using namespace std;
class shape{   //abstract class or interface
public:
virtual void display()=0;

virtual ~shape(){cout<<"This is shape destructor";}
};
class oned:public shape{  //abstract class cause pure virtual function is not overriddned
public:
virtual ~oned(){cout<<"This is oned destructor";}

};
class twod:public oned{   //concrete class cause it is overriddned
public:
virtual void display()override
{
 cout<<"This is twod";
}
virtual ~twod(){cout<<"This is twod destructor ";}
};
int main()
{
    shape *p=new twod();
    p->display();

    delete p;
}
