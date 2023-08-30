//WAP in c++ to demonstrate passing the function pointer to function as a parameter
#include<iostream>
void fun1();
void fun2(void(* funptr)());
using namespace std;
int main()
{
  fun2(fun1);
  //calling function 2 and passing function 1 address

}
void fun2(void(* funptr)())
{
  funptr();
}
void fun1()
{

cout<<"This is function one";
}