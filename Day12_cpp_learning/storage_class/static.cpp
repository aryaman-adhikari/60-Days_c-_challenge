//WAP in C++ to demonstrate the static
#include<iostream>
void prin();
using namespace std;
int main()
{
prin();
prin();
prin();

} 
void prin()
{
static int i=1;
int j=1;
cout<<i<<","<<j<<endl;
i++;
j++;
}
//here int makes the value of j=1 for each time but static makes the i increased simultaneusly for each time.