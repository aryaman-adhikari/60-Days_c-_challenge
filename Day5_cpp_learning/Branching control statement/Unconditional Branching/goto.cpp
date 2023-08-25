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
   
  return 0;
}