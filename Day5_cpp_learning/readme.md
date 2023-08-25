# 🚀Looping Control Statement
## For()
## While()
## Do-while()

# For
>It is a entry control loop. It checks condition at first and transfer the control inside it's body only if the condition is true.
>Let's see a program example:
```
//WAP in c++ to print natural number up to given number
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the Number:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
      return 0;
}
```
## Nested for()
```
//WAP in c++ to find the prime number form 1 to nth number
//this program demonstrates the nested for loop as well 
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        
      c=0;
       for(j=1;j<=i;j++)
       {
        if(i%j==0)
        {
            c++;
        }
       }
       if(c==2)
       {
        cout<<"This number is prime:"<<i<<endl;

       }
    }
    return 0;
}
```

# while()
>It is a entry control loop. Means it also checks the conditons at first and transfer the control inside it's body only if the conditon is true.
>Let's see a program example:
```
//WAP in c++ to print natural number using while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    int i=1;         //initialization

    while(i<=n)         //condition
    {
        cout<<i<<endl;
        i++;                   //increment
    }
}

```

## nested while()
```
//WAP in c++ to find the prime number form 1 to nth number
//this program demonstrates the nested for loop as well 
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {
        
      c=0,j=1;
       while(j<=i)
       {
        if(i%j==0)
        {
            c++;
        }
        j++;
       }
       if(c==2)
       {
        cout<<"This number is prime:"<<i<<endl;

       }
       i++;
    }
    return 0;
}

```
# do-while()
>It is a exit control loop in which statements are executed at least once 
> because conditon is checked at last.
>Let's see a program example:
```
//WAP in c++ to print natural number using do while loop
#include<iostream>
using namespace std;
int main()
{
    int  n,i;
    cout<<"Enter the number: ";
    cin>>n;
i=1;
    do{
 cout<<i<<endl;
 i++;
     }while(i<=n);
}
```

## nested do-while()
```
//WAP in c++ that prints the prime number from 1 to nth.
//WAP in c++ to find the prime number form 1 to nth number
//this program demonstrates the nested for loop as well 
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    i=1;
    do
    {
        
      c=0,j=1;
       do
       {
        if(i%j==0)
        {
            c++;
        }
        j++;
       }while(j<=i);
       
       if(c==2)
       {
        cout<<"This number is prime:"<<i<<endl;

       }
       i++;
    }while(i<=n);
    return 0;
}
```


# 🚀 Unconditional Branching Statement
 ## goto
 >It is unconditional Branching statement which makes unconditional jump to label declared area. But in modern programming it is not used because it makes program more complex and hard to maintain code. However ,here is a program example of it:
 ```
  //WAP that demonstrates the goto statement
#include<iostream>
using namespace std;
int main()
{
    int a;
     input:        //giving goto label
    cout<<"Enter a Number:";
    cin>>a;

    if(a<=0)
    {
        cout<<"Enter a positive Number!!!"<<endl;
        goto input;  //unconditional jump to input label
    }
cout<<"You entered:"<<a<<endl;
   

}
 ```
 # 🚀 Conditional Branching Statements
## ⚡ If()
## ⚡else-if()
## ⚡Nested if()
## ⚡Ladder if()
## ⚡switch

## if()
> It is a conditional branching control statement that is  used when there is certain condition in the program. It passes the control inside it's body if the condition is only true.
> Let's check with a program example:
```WAP in c++ to check that a given number is :
#include<iostream>
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a>0)
    {
        cout<<This is positive::<<a;
        cout<<endl;
    }

}
```
# nested if():
```
//WAP in c++ to demonstrate the example of nested if
//find greatest between three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three Numbers :";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"The greatest is:"<<a<<endl;
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            cout<<"The greatest is:"<<b<<endl;
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            cout<<"The greatest is:"<<c<<endl;
        }
    }
}
```
# Ladder if():
```
//WAP in c++ that demonstrates the example of ladder if
//percentage calculation

#include<iostream>
using namespace std;
int main()
{
    float mark;
    cout<<"Enter the total Marks :";
    cin>>mark;

    if(mark>=100 || mark<0)
    {
        cout<<"INVALID";

    }
    else if(mark>=90&&mark<100)
    {
        cout<<"A+";
    }
    else if(mark>=80&&mark<90)
    {
        cout<<"A";
    }
    else if(mark>=70&&mark<80)
    {
        cout<<"B+";

    }
    else if(mark>=60&&mark<70)
    {
        cout<<"B";
    }
    else 
    {
        cout<<"C";
    }
    
}
```
# switch:
```

//WAP that demonstrates the example of switch
//WAP in c++ to print RGB colour code using switch
#include<iostream>
using namespace std;
int main()
{
    char cc;
    cout<<"Enter color Code:";
    cin>>cc;
    switch(cc)
    {
        case 'R':
        case'r':
        cout<<"RED";
        break;

        
        case 'G':
        case'g':
        cout<<"GREEN";
        break;

        
        case 'B':
        case'b':
        cout<<"BLUE";
        break;

        default:
        cout<<"INVALID";
    }
}
```
# if() - else example:

```//WAP in c++ to find the greatest between two numbers
#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter two Numbers :";
cin>>a>>b;
if(a>b)
{
    cout<<"The greatest is:"<<a<<endl;
}
else{
cout<<"The greatest is :"<<b<<endl;
}
}```





