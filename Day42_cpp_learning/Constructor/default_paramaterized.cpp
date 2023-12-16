#include<iostream>
#include<string>
using namespace std;
class test{
    int a,b;
    int x;
    string name;
    public:
    test()
    {
        cout<<"Hi this is default Constructor "<<endl;
        a=5;
        b=6;
    }
    void show()
    {
        cout<<a<<endl<<b<<endl;
    }


    
    //paramaterized constructor
    test(int a, string nam)
    {
       x=a;
       name=nam;
    }
  void showw()
  {

   
cout<<name<<x;
  }




};
int main()
{
   
    test obj;
    obj.show();
    test obj1(3,"aryan");   // test obj =test(3, "aryan"); //explicit invoke
    obj1.showw();


   

}