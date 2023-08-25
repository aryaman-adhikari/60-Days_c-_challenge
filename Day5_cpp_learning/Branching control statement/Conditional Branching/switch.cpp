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
      return 0;
}