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

};
int main()
{
 ofstream file("note.dat",ios::binary);
 if(!file)
 {
    cerr<<"Error ";
    return -1;
 }

 student obj(1,3.99,"aryan");
 file.write((char*)&obj,sizeof(obj));
 file.close();
 return 0;
}