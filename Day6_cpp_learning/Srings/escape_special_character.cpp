//WAP in c++ that demostrates the solution for special characters
#include<iostream>
#include<string>
using namespace std;
int main()
{
//string a="Hi,my name "is" Aryaman Adhikari";
//this line prints error in the program because c++ program misunder stood this string.So, the solution is using / before special characters. It turns special characters into string character.
//so,
string a="Hi, my name is \"aryan\"";
cout<<a;
return 0;

}