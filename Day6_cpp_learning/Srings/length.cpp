//WAP in c++ to find out hte length of string using length and size both.
#include<iostream>
#include<string>
int main()
{
    std ::string a;
    std::cout<<"Enter a string:";
    std::cin>>a;
    //finding length using length and size
    std::cout<<"The length of this string is:"<<a.length()<<std::endl;
    std::cout<<"The length of this string is:"<<a.size();


}