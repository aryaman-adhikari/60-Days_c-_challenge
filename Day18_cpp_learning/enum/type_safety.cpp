//enum type safety
#include<iostream>
using namespace std;
enum color{red,green,blue};
//by default enum in C++ uses int data type so red is assigned at 0 , green at 1 and continues .....
int main()
{
    //here in days inweek if i assigns the value that are not the part of enum constant then it will lead to compilitation error i.e because of type mismatch
color code=green;
switch(code)
{
   case red:
   cout<<"This is red";
   break; 

     case green:
   cout<<"This is green";
   break;

     case blue:
   cout<<"This is blue";
   break;

   default:
   break;
}

}