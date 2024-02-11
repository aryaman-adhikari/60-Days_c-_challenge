#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
 string name;
 ifstream file;
 file.open("aryan.txt");

 if(!file)
 {
    cerr<<"Error opening"<<endl;
    return -1;
 }
 while(getline(file,name))
 {
 
  cout<<name<<endl;
  
 }
 file.close();

}