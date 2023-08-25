//WAP in c++ to access the character in a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a="HELLO";

  //let's access it's second character
  cout<<"It's character is ::"<<a[1]<<endl;  

  //Let's replace h with j
  a[0]='j';
  cout<<a;
}