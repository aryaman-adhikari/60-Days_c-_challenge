# ⚡ #day 6 
# Strings.
>It is the collection or arrays of characters. It is a variable that stores the letter by combining characters.
>To use string in program in c++ we must need to include string header file.
- Let's create a string variable in c++ using a simple program.
```
//WAP in c++ to demonstrate the string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string aryan="HELLO WORLD";
    //Here a string variable named aryan is created.
    //printing it,
    cout<<aryan<<endl;
}
```
>The + operator is used to concatenate two strings in c++ means adding two strings.
>Here's is the program example:
```
//WAP in c++ to concatenate two strings.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cout<<"Enter first string:"<<endl;
    cin>>a;
    cout<<"Enter Second string:"<<endl;
    cin>>b;

    //concatenating them
    a=a+b;
    cout<<a;
}

```
>In c++ string is actually a object which contains various functions.We can add two strings using append function as well
>Here's the program example:
```
//WAP in c++ to add two strings using append function
#include<iostream>
#include<string>
using namespace std;
int main()
{
 string a,b;
 cout<<"Enter the first string:";
 cin>>a;
 cout<<"Enter the second string:";
 cin>>b;

 //now adding using append 
 string added=a.append(b);
 cout<<added;
}

```

>Note: In c++ we can use + operator for both addition and concatenation.
>In addition two numbers are added like:
``` 
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c;
    c=a+b;
    cout<<c;      //this will give 20 as a output
return 0;
}
```
>Likewise in string,
```
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="10",b="20";
    string c=a+b;
    cout<<c;    //this will give 1020 as a output.
    return 0;
}
```
>But , if we add one value and one string then it gives error.
# 🚀Length of strings.
>In c++ we can use length() function to find out the length of a string.We can also use size() function which is just alias of length function.
>Here is the program example:
```
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
```
>Now,  Let's access the character's in a string. We can access the character's in a string by refering to it's index by giving value in a [] brackets.
>Here's the program example:
```
//WAP in c++ to access the character in a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a="HELLO";

  //let's access it's second character
  cout<<"It's character is ::"<<a[1]<<endl;  

  //Let's replace h with j
  a[0]='j';
  cout<<a;
}

```
>This programs also replaces the character.
# Using backslash(\)
>//string a="Hi,my name "is" Aryaman Adhikari";
>//this line prints error in the program because c++ program misunder stood this string.So, the solution is using \ before special characters. It turns special characters into string character.
>Here's the program example:
```
//WAP in c++ that demostrates the solution for special characters
#include<iostream>
#include<string>
using namespace std;
int main()
{
//string a="Hi,my name "is" Aryaman Adhikari";
//this line prints error in the program because c++ program misunder stood this string.So, the solution is using / before special characters. It turns special characters into string character.
//so,
string a="Hi, my name is \"aryan\"";
cout<<a;
return 0;

}

```

>Note if we use cin then it will only prints the string that doesn't meet a whitespace or tabs that's why we use getline to print all line.
>Here is a program example:
```

//WAP in C++ to demonstrate the getline function
#include<iostream>
#include<string>
using namespace std;
int main()
{
string a;
cout<<"Type your full name";
//cin>>a;  it only takes the first string

getline(cin,a); // it will take a whole line
cout<<a;
}
```