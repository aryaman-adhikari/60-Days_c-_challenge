#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream original("Copied.txt");
    ofstream copied1("Copied1.txt");

    if(! original || ! copied1)
    {
        cerr<<"Error";
        return -1;
    }
    char ch;
    while(!original.eof())
    {
        original.get(ch);
        copied1.put(ch);
    }
    original.close();
    copied1.close();
    return 0;
}