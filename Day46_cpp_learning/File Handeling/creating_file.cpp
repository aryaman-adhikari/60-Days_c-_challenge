#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream out;
 out.open("nepal.txt");
 out<<"Hi this is aryan . How are you"<<endl;
 
 out.close();
 return 0;
}