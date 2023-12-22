#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream file;
    file.open("text.txt");

  if(!file)
  {
    cerr<<"Error opening ";
    return -1;
  }
 string line;
  while(file)
  {
getline(file,line);
cout<<line;

  }
}