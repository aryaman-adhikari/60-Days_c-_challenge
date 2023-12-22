#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file;
    file.open("Test.txt",ios::app);
  
  if(!file)
  {
    cerr<<"Error";
    return -1;

  }
  string line;
  cout<<"Enter to add :"<<endl;
 
  getline(cin,line);
  file<<line;
  file.close();
  return 0;
}