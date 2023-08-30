//WAP in C++ to demonstrate the string using function pointer
#include<iostream>
void str(char *);
using namespace std;
int main()
{
    char a[30];
    cout<<"Enter the string:"<<endl;
    cin>>a;
    //creating a function pointer
    void(* name)(char *);
    //assigning the name to str module
    name=str;
    //calling using function pointer
    name(a);


}
void str(char *stri)
{
cout<<"The string is::"<<stri<<endl;    
}