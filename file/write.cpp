#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 fstream file;
 file.open("jenish.txt",ios::out);
 if(!file)
 {
    cerr<<"Error opening a file"<<endl;
    return -1;
 }
 file<<"Hi this is  aryan"<<endl;
 file.close();
}