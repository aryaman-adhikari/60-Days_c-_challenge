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