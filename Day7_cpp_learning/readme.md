# 🚀 Day7 
## Math in c++
>c++ has many functions that allows you to perform mathematical tasks on numbers.In order to use different mathematical functions in program we need <cmath> header file where sqrt,power,round of number, log etc functions can be found.
>Let's find a maximum and minimum using these functions.
>For this we need to use <algorithm> header where max and min is defined.
>Here's the program example::
```
//WAP in c++ to find the maximum and minimun of two numbers using max and ,min.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the Numbers:";
cin>>a>>b;
cout<<max(a,b)<<" "<<"is greatest"<<endl;
cout<<min(a,b)<<" "<<"is Smallest";
}
```
>Let's calculate the square , log and round of a number.
```
//WAP that demonstrates the use of cmath in c++ program
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a Number:";
    cin>>a;
    double square=sqrt(a);
    cout<<square<<endl;
    cout<<"Enter a Number:";
    cin>>a;
    double logarithm=log(a);
    cout<<logarithm<<endl;
    cout<<"The rounded off Number is::"<<round(logarithm);
    

}
```
# Let's learn about Boolean Data Type
>Very often in programming we need a kind of datatype that only returns two value (i.e true or False). So, in this type of case we use boolean data types.
>A boolean variable is declared using bool keyword and variable_name. 
>Let's check with a program example:
```
//WAP in c++ to demonstrate the boolean data type
#include<iostream>
using namespace std;
int main()
{
    bool a=false;  //It will return 0 because there is false
    bool b="aryan";//It will return 1 because there is something
    bool c=true;   //It will return 1 because it is true.


    cout<<a<<endl<<b<<endl<<c;

}

```
>From the above example we can see that it returns 1 when it is true and returns 0 when it is false.
>Another example for boolean expression is shown below:
```
//WAP in c++ to demonstrate boolean expression.
#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"Enter the age:";
   cin>>a;
   //example
   bool b=(a>=18);
   cout<<b;
   //it will return in either 0 or 1
   if(b)
   {
    cout<<endl;
    cout<<"You are eligible to vote";
   }
   else{
    cout<<endl;
    cout<<"You are not eligible to vote";
   }
}

```
# Let's have a quick look on ternary operator
>This operator is also known as short hand if-else() because it takes three operands and it can be used to reduce the multiple lines of Code.
- Here is it's syntax:
> variable=(condition) ? expression(True) : expression(False);
>Let's have a look on it's program example:
```

//WAP in c++ that demonstrates the example of ternary operator
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two Numbers:";
    cin>>a>>b;
    string c=(a>b)?"a is greater":"b is greater";
    cout<<c;
}

```
# Let's learn about Jumping Statements
 ## break
 > It is a jumping statement that transfers the control just after the first loop by escaping or terminating the loop .In order to use it we necessarily need a loop.
 >Here is the program example:
 ```
 
 //WAP in c++ to demonstrate the break statement.
#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int i;
    for(i=1;i<=4;i++)
    {
        if(i==3)
        {
            cout<<"It's time to break";
            break;
        }
    }
}
 ```

## Continue
>It is also a type of jumping statement that continues the iteration by terminating the current iteration of the nearest loop.
>Here's the program example:
```
//WAP in c++ to demonstrate the example of continue
#include<iostream>
using namespace std;
int main()
{
        int a=4;
        int i;
        for(i=1;i<=a;i++)
        {
            if(i==3)
            {
                cout<<"Let's Continue";
                continue;
            } 

        }
}


```
# Tricky If -else
 ## if() statement
 ### Question 1:
 ```
 if(condition);
 {
    cout<<"hello";
 }
 cout<<"world";
 ```
 - This will print the Hello world because ; will terminate the if statement.So,whether the if condition is true or false it prints all the statements.

 ### Question 2:
 #### money=500
 ```
 if(money=1000)
 {
    cout<<"True";
 }
 cout<<"good";
 ```
 - This will always print True good because no matter what value of money is entered the condition always assigns 1000 to it and always makes it true .So, True good is always printed.

 ### Question 3:
 #### money=200
 ```
 if(money>1000)
   cout<<"HELLO";
   cout<<"World";
   cout<<>"aryan";
 ```
 - This will print the World and aryan because the if condition without braces only takes a single statement inside it's body. Since the condition is false it will print the World and aryan.

 ### Question 4:
 #### money=1500
```
if(money>1000)
   cout<<"HELLO";
   cout<<"World";
   cout<<>"aryan";
```
- This will print the HELLO because the condition is true and if statement doesn't contain braces so it only take a single statement  inside it's body.

### Question 5:
#### money=100
```
if(money)
{
    cout<<"hello";
}
cout<<"world";

```
- Since the condtion is money which is 100 it is true so it prints hello and world.But, if the money was 0 or NULL then the world will only get printed.
# if-else()
### Question 1:
#### money=100
```
if(money>=100);
{
    cout<<"printed";
}
else{
    cout<<"hello";
}
- This will throw as error because if statement will be terminated and without if else can't be executed.
```
# if-else()
### Question 2:
#### money=100
```
if(money>=100)
{
    cout<<"hello";
}
cout<<"world";
else{
    cout<<"aryan";
}

```
- This will throw an error because we cannot write any statements between if and else.

# Array's
>Array is the collection of similar type of data binding in a single unit under a single name.It's access point is sequential because of it's static data structure.
>There are two types of array's in c++:
1. One dimensional Array.
2. Multi dimensional Array.
# One dimensional Array
- The array which suffix is in either row or column is known as one dimensional array. For example:
```
int a[5];
int b[5]={1,2,3,4,5};
string name[5]={"aryan","ashish","samir","bishal"};
```
>NOTE: Array's index always starts with 0 which represents the first element of array.

# Programs(Array's)
### First Program:
```


//WAP in c++ to take two one d array from user and add sequentially to another array
#include<iostream>
using namespace std;
int main()
{
    int n,n1;
    cout<<"Enter the Number size of first array:";
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
cout<<"Enter the elements:";
cin>>a[i];
    }

    cout<<"Enter the size of second array:";
    cin>>n1;
    int b[n1],c[n+n1];
    for(i=0;i<n1;i++)
    {
        cout<<"Enter the elements";
        cin>>b[i];
    }
    for(i=0;i<(n+n1);i++)
    {
        if(i<n)
        c[i]=a[i];

        else
        c[i]=b[i-n];
    }

    for(i=0;i<(n1+n);i++)
    {
        cout<<"\n"<<c[i];
    }

}



```
### Second Program
```
//WAP in c++ to alternate the two array
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number:";
    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the elements :";
        cin>>a[i];
    }
    int n1;
    cout<<"Enter the Number:";
    cin>>n1;
    int b[n1],c[n+n1];
    for(i=0;i<n1;i++)
    {
cout<<"Enter the elements:";
cin>>b[i];
    }
   int mod=0;
    for(i=0;i<n;i++)
    {
c[mod]=a[i];
mod+=2;
    }
    mod=1;
    for(i=0;i<n1;i++)
    {
        c[mod]=b[i];
        mod+=2;
    }

    for(i=0;i<(n+n1);i++)
    {
        cout<<"\n"<<c[i];
    }
}


```
## The real life operation of array are:
1. Insertion
2. Deletion.
3. Sorting.
4. Modification.
5. Searching.
  
### First  Program of real life operation
# insertion
```

//WAP in c++ to insert new element in a spcified location .
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    int a[100],i;
    for(i=0;i<n;i++)
    {
        cout<<"Input elements:";
        cin>>a[i];
    }
    int nele,loc,tmp;
    cout<<"Enter the location and value to insert::";
    cin>>loc>>nele;
    for(i=loc;i<n;i++)
    {
        tmp=a[i];
        a[i]=nele;
        nele=tmp;
    }
    a[n]=nele;
    for(i=0;i<=n;i++)
    {
        cout<<"\n"<<a[i];
    }

}


```
## Deletion
```
//WAP in c++ to perform deletion
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;

    int i,a[100];
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements:";
        cin>>a[i];
    }
    int loc;
    cout<<"Enter the Location to delete:";
    cin>>loc;
    for(i=loc;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<"\n"<<a[i];
    }
}


```
## Modification
```

//WAP in c++ to modify the array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
     int i,a[100];
     for(i=0;i<n;i++)
     {
        cout<<"Input elements";
        cin>>a[i];
     }
     int loc,ele;
     cout<<"Enter the location and it's element to modify";
     cin>>loc>>ele;
     a[loc]=ele;
     for(i=0;i<n;i++)
     {
        cout<<"\n"<<a[i];
     }

}

```
## Searching.
1. Binary Searching
2. Sequential Searching

## Binary Searching.
- Program Example:
```

//WAP in c++ to search elements using Binary searching
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int i,a[100];
    for(i=0;i<n;i++)
    {
        cout<<"Input Elements:";
        cin>>a[i];
    }
    //sorting at first.
    int j,tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
            tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
          }
        }
    }
    int sear;
    cout<<"Enter searching element:";
    cin>>sear;
    //now it's sorted
    int flag=0,mid,beg=0,end=n-1,loc;
    while(flag==0&&beg<=end)
    {
        mid=(beg+end)/2;
        if(sear==a[mid])
        {
            flag=1;
            loc=mid;
        }
        else if(sear<a[mid])
        {
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(flag==1)
    {
        cout<<"The searched element is "<<" "<<a[loc]<<"at "<<loc<<" location"<<endl;
    }
    else{
        cout<<"Not Found";
    }
}


```

## Sequential Searching(linear)
```

//WAP in c++ to demonstrate sequential searching
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
     
     int i,a[100];
     for(i=0;i<n;i++)
     {
        cout<<"Input Elements:";
        cin>>a[i];
     }
      int sear,flag=0,loc;
      cout<<"Enter the element to search:";
      cin>>sear;
      for(i=0;i<n;i++)
      {
        if(sear==a[i])
        {
            loc=i;
            flag=1;
        }
      }
      if(flag==1)
      {
        cout<<"The searched element is "<<a[loc]<<" at "<<loc;

      }
      else{
        cout<<"Not found";
      }

}


```
# Sorting(bubble sort)
```
//WAP in c++ to sort the given array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int i,a[100];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the elements:";
        cin>>a[i];
    }
    //sorting it
    int tmp,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
cout<<"The sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        
            cout<<"\n"<<a[i];
        
    }
}


```
# Multidimensional Array
- The array that has two suffix in the form of row and column is multidimensional array.
## Addition of 2 x 2 matrix.
```
//WAP in c++ to add two 2 x 2  matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the elements:";
            cin>>a[i][j];
        }
    }

cout<<"Enter the second array"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the elements:";
            cin>>b[i][j];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            cout<<"\t"<<c[i][j];
        }
        cout<<"\n";
    }
}


```

## Subtraction of 2 x 2 matrix
```

//WAP in c++ to subtract two 2 x 2 array.
//WAP in c++ to add two 2 x 2  matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the elements:";
            cin>>a[i][j];
        }
    }

cout<<"Enter the second array"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Enter the elements:";
            cin>>b[i][j];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            cout<<"\t"<<c[i][j];
        }
        cout<<"\n";
    }
}


```

## Multiplication
```
//WAP in c++ to multiply two matrix
#include<iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2,i,j,a[50][50],b[50][50],c[50][50];
    cout<<"Enter the first row and column";
    cin>>r1>>c1;
    cout<<"Enter the second row and column";
    cin>>r2>>c2;
    

    //check whether it is multipliable or not
    if(c1==r2)
    {
        
    cout<<"Enter first array";
    cout<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Input Elements"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter Second array";
    cout<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Input Elements"<<endl;
            cin>>b[i][j];
        }
    }
    int sum,k;

    //now multiplying
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    //printing it
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            
            cout<<"\t"<<c[i][j];
        }
        cout<<"\n";
    }





    }
    else{
        
        cout<<"NOT MULTIPLICABLE";
        cout<<endl;
    }
}

```

## Transpose
```

//WAP in c++ to transpose 2 x 2 the array.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],i,j;
    cout<<"Enter the first array";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<endl;
            cout<<"Input Elements";
            cin>>a[i][j];
        }
    }

    //after transpose
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"\t"<<a[j][i];
        }
        cout<<"\n";
    }

     
}

```

# In addition
- We can use sizeof(array_name)  to get the size of array and compiler is smart enough to determine the size of array based on the number of elements and data type .
```
a[]={1,2,4,64,64}; 

```
> This automatically omits the size of array and,
```
size of(a);

```
>This gives the total size of array.




