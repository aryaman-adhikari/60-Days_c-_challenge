//WAP in c++ that demonstrate the objects like cout,cin,and endl.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any Number";
    //here the cout is object defined in ostream class that is displayed on monitor and << is the insertion operator that takes place for output by sending bytes to ostream
    cin>>n;
//here cin is the object of istream class that takes the data from user and >> this is known as extraction operator that takes place for input by sending bytes to istream

cout<<n<<endl;
//here endl also works as line breaking in the terminal and it also fluses the stream.
//it is also a predefined object of ostream class
}