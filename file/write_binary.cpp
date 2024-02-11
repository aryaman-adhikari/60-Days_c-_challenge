#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
class student{
    public:
    int a;
    string name;
    float marks;

    void get()
    {
        cout<<"Enter the a , name and marks of student :"<<endl;
        cin>>a>>name>>marks;
    }

    void display()
    {
        cout<<endl;
        cout<<setw(5)<<left<<a<<setw(20)<<left<<name<<setw(20)<<left<<marks<<endl;
    }
};
int main()
{
fstream file("write.txt",ios::out|ios::binary);
if(!file)
{
    cerr<<"error ";
    return -1;
}
int i;
student obj;
for(i=0;i<3;i++)
{
  obj.get();
  file.write((char *)&obj,sizeof(obj));
}
file.close();
file.open("write.txt",ios::in|ios::binary);
if(!file)
{
    cerr<<"Error ";
    return -1;
}
cout<<setw(5)<<left<<"A"<<setw(20)<<left<<"Name"<<setw(20)<<left<<"Marks"<<endl;
for(i=0;i<3;i++)
{
    file.read((char *)&obj,sizeof(obj));
    obj.display();
}
file.close();
}