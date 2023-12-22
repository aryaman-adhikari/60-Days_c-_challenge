#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     ifstream file;
     file.open("text.txt");
     int a;
     double b;
     char name[30];


     if(!file)
     {
        cout<<"Error "<<endl;
        return -1;
     }
     file>>a>>b>>name;

     cout<<a<<b<<name;
}