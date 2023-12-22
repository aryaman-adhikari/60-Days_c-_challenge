#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("text.txt", ios::in);
  if(!file)
  {
    cerr<<"Error";
    return -1;

  }
  char ch;
  while(file)
  {
  file.get(ch);
  cout<<ch;
  }
  return 0;
}