#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream file("aryan.txt");
    if(!file)
    {
        cout<<"Error occured"<<endl;
        return -1;
    }
    file.seekg(4,ios::beg);
    int pos=file.tellg();
    cout<<pos;
   string line;
    file>>line;
    cout<<line;

    return 0;
}