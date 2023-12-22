#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("Copied.txt");

    if(!file.eof())
    {
       file.seekg(2,ios::beg);
       
       int cur;
       cur=file.tellg();
       cout<<cur<<endl;

       string line;
       file>>line;

       cout<<line;


    }
    else{
        cerr<<"Error";
        return -1;
    }
    file.close();
    return 0;
}