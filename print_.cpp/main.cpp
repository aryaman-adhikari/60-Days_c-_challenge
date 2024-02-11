#include<iostream>
#include"printer.hpp"
#include<cstdio>
using namespace std;
int main() {
    char str[20];
    print("Enter a string:");
    gets(str);
    
    // Call the function from the header
    print(str);

    return 0;
}
