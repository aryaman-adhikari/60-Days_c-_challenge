//WAP in C++ to demonstrate void pointer in c  
//Note that we don't need to type cast in C while assigning the void pointer to any other type of pointer.
#include<stdio.h>
int main()
{
    void *a;
    int *b;
    int data=5;
    //assigning the address of data to *a void pointer.
    a=&data;
    //let's assign the void pointer to b pointer
    b=a;
    //Now let's prints the data using both void and int pointer
  

    printf("The value is %d",*b);
}