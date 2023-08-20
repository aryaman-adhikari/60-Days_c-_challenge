//WAP to demonstrate the basic structure of c++ programming
/*1.Documentation Section   (optional)
2.Linking section           (compulsary)
3.Definition Section        (optional)
4.Global Declaration Section(optional)
5.Class defination           (optional)
    a.Data members(data,attributes,properties)
    b.Member function Definition(function,methods,behaviours)
6.Main function section      (compulsary)
7.User-define Section        (optional)

1.Documentation Section
 -->Like we have written points regarding basic structure of c++ programming by numbering them from 1 to 7 . This section is known as Documentation section.
*/
#include<iostream>
//This iostream is a header that contains the input and output streams like cerr,clog,cout,cin which we will discuss in other days. But, let's think this as a linking section because # is the preprocessor that is combined like include<iostream> form which makes it prepocessor directive so that we can access all the objects (i.e input & output).
#define pi 3.14
//this is the defination section that makes the value of pi constant of 3.14 .so, whenever we use pi in the program this will give us 3.14 as it's value.
void area();
//this is function prototype,decleration 
float r;
//this is global decleration section of variable (r) means that it can be used in every modules or objects of the program
class myclass        //this is just defining the class 
{
public:       //it will make the class public
int a;  //data,attributes 
void behaviour()//function or behaviour
{
    std::cout<<"Hello this is Area of Circle";
    //std is namespace and cout is object defined in ostream class.
}
}; //class definition is closed under {} braces and terminated with ;
//now it's turn for main function
int main()
{
    std::cout<<"Hi, this is main function"<<std::endl;
  area();//calling the function area

 return 0;
}
//this is user defined function section 
void area() //defining the function area
{
float aoc=0;
std::cout<<"Enter the radius"<<std::endl;
std::cin>>r;
aoc=pi*r*r;
std::cout<<"The area of circle is"<<aoc<<std::endl;//here endl is used to skip this line. It also fluses the things remained in streams.
}

