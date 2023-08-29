//WAP in C++ to create a function pointer
#include<iostream>
int sum(int,int);
using namespace std;
int main()
{
//creating a function pointer
int(* funptr)(int,int); //decleration of function pointer
funptr=sum;   //pointer is pointing to add function
//address of sum is stored in funptr
//calling sum using funptr
int summed=funptr(4,5);
cout<<"The sum is:"<<summed<<endl;
return 0;
}
int sum(int a,int b)
{
    int summed=a+b;

    return summed;
}