#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream original("Test.txt");
    ofstream copied("Copied.txt");
     if(!original || !copied)
     {
        cerr<<"Error ";
        return -1;
     }
     string line;
     while(!original.eof())
     {
        getline(original,line);
        copied<<line;
     }
 original.close();
 copied.close();
 return 0;
}