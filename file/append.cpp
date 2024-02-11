#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 fstream file;
 file.open("jenish.txt",ios::out);
 if(!file)
 {
    cerr<<"Error Opening a file"<<endl;
    return -1;
 }
 file<<"Aryan is hero"<<endl;
 file.close();
}