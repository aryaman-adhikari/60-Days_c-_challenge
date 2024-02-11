#include<iostream>
using namespace std;
class test {
public:
virtual void display()=0;
virtual ~test(){
    cout<<"base";
}

};
class exam:public test{  //concrete 
public:
virtual void display() override
{
    cout<<"This is exam"<<endl;
}
virtual ~exam()
{
    cout<<"exam";
}
};
class board: public test{
public:
public:
virtual ~board(){cout<<"exam";};
};
int main()
{
test *p1=new exam();

p1->display();

// p2=new board();
// p2->display();
delete p1;
}