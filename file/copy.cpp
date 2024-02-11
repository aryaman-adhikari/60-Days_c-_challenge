#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream file_co,file_pa;
    file_co.open("jenish.txt",ios::in);
    file_pa.open("aryan.txt",ios::out);
    if(!file_co ||! file_pa)
    {
        cerr<<"Error";
        return -1;
    }

    string line;
    while(!file_co.eof())
    {
        getline(file_co,line);
        file_pa<<line;

    }
    file_co.close();
    file_pa.close();
    
}
