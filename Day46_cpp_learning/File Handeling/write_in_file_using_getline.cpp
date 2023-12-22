#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file("Test.txt");
    if(!file)
    {
        cerr<<"Error";
        return -1;

    }
   string line;
   cout<<"Enter what to save in file :"<<endl;
   getline(cin,line);
   file<<line;
   file.close();
   return 0;
}