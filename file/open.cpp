#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter the name of file "<<endl;
    cin>>name;

   ofstream file;
   file.open(name);

if(!file)
{
    cerr<<"Error ";
    return -1;
}

file<<"My name is Aaryaman Adhikari"<<endl;
file<<"I am 20 yrs old";

file.close();


}