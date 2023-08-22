//WAP in c++ that demonstrate the use of enum data type
#include<iostream>
#include<string>
using namespace std;
enum gender{   //an enum named gender is created
    male,
    female,
    others
    
};
int main()
{
string gend;
cout<<"Enter The Gender";
cin>>gend;
//taken input
//selectedgender variable is defined of type gender
gender selectedgender;
if(gend=="female")
{
 selectedgender=female;
 }
else if(gend=="male")
{
  selectedgender=male;
}
else
{
  selectedgender=others;
  }


switch(selectedgender)
{
    case male:
    cout<<"This is Male"<<endl;
    break;


    case female:
    cout<<"This is Female "<<endl;
    break;


    case others:
    cout<<"This is others "<<endl;
    break;



    default:
    cout<<"INVALID"<<endl;
    break;
}
}