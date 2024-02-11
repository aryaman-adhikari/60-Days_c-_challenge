#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
  ofstream file;
  file.open("aryaman.txt",ios::app);
  if(!file)
  {
    cerr<<"Error ";
    return -1;
  }
  file<<"Education beats beauty";
  file.seekp(0,ios::end);
  cout<<file.tellp()<<endl;

  file<<"I am good boy"<<endl;
  file.close();


}