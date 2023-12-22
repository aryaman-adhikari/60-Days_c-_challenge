#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("nepal.txt",ios::in);

   if(!file)
   {
    cout<<"Error opening the file "<<endl;
    return -1;
      }
 char name[30];
 file>>name;
 cout<<name;
return 0;


}