//enum traversed
#include<iostream>
using namespace std;
//making enum class
enum color{
red,green,blue
};
int main()
{
   


    //using iteration to traverse the enum constants
    for(color i=color::red;i<=color::blue;i=static_cast<color>(static_cast<int>(i)+1))
    //this is the loop for assigning value at i or for type casting 
    {
        cout<<static_cast<int>(i)<<endl;  //casting to print the integer value
    }
}