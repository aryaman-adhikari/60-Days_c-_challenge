#include<iostream>
using namespace std;
class stu{
    int id;
    char name[30];
public:
friend void operator <<(ostream &out, stu &s);
friend void operator >>(istream &in, stu &s);
};

void operator <<(ostream &out, stu &s)
{

    out<<"Name:"<<s.name<<"Id:"<<s.id<<endl;
}
void operator >>(istream &in , stu &s)
{

    cout<<"Enter the  name and id :"<<endl;
    in>>s.name>>s.id;
}
int main()
{
 stu obj;
 cin>>obj;
 cout<<obj;
 
}