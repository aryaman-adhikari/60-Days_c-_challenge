#include<iostream>
#include"using_declare.hpp"
using namespace std;
using namespace ns1;
int main()
{
    using ns2::print;

    print();  
    // using ns2::greet;

    greet();
    greet();

}