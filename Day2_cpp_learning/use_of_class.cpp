/*In this program we are going to solve a problem of area of circle and clearing the concept of class by accessing it's data and function*/
#include<iostream>
#define pi 3.14
void area();
int r;
class myclass
{
    public:
    int a;
    void display()
    {
 std::cout<<std::endl<<a;
std::cout<<std::endl<<"Hi i am class function ";
    }
};
int main()
{
     std::cout<<"Hi this is main module ";
  myclass m;
  m.a=100;
  m.display();
  area();
 
return 0;
}
//user defined function
void area()
{
    std::cout<<std::endl<<"Enter the radius of Circle ";
    std::cin>>r;
    int aoc=pi*r*r;
    std::cout<<"The area of circle is "<<aoc<<std::endl;
}