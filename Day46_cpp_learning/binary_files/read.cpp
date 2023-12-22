#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class student{
    int roll;
    double gpa;
    char str[30];

public:
student(){};
student(int a, double b, const char *n):roll{a},gpa{b}
{
 strcpy(str,n);
}

void show()
{
    cout<<roll<<gpa<<str;
}

};
int main()
{
 ifstream file("note.dat",ios::binary);
 if(!file)
 {
    cerr<<"Error ";
    return -1;
 }
  student obj;

 file.seekg(0,ios::beg);


 file.read((char*)&obj,sizeof(obj));
 obj.show();
 file.close();
 return 0;
}