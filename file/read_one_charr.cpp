#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("aryan.txt",ios::in);

char c;
while(!file.eof())
{
    file.get(c);
    cout<<c;
}
file.close();
return 0;
}