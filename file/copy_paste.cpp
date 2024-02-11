#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream file_co,file_pa;
    file_co.open("jenish.txt",ios::in);
    file_pa.open("aryan.txt",ios::out);
    if(!file_co || !file_pa)
    {
        cout<<"error"<<endl;
        return -1;
    }
    char c;

    while(!file_co.eof())
    {
       file_co.get(c);
       file_pa.put(c);
    }
    file_co.close();
    file_pa.close();
    
    return 0;
}