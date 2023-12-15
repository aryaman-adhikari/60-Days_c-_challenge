#include<iostream>
using namespace std;
class test{
    int a;
    public:
void get()
{
    cin>>a;
}


    void operator==(test obj)
    {
  if(a==obj.a)
  {
    cout<<"Equal"<<endl;

  }
  else{
    cout<<"Not Equal"<<endl;
  }
    }
    // void compare(test obj)
    // {
    //     if(a==obj.a)
    //     {
    //         cout<<"Equal"<<endl;
    //     }
    //     else{
    //         cout<<"Not Equal"<<endl;
    //     }
    // }
};
int main()
{
test t1,t2;
cout<<"Enter the value for t1 object :"<<endl;
t1.get();
cout<<"Enter the value for t2 object :"<<endl;
t2.get();
// t1.compare(t2);  //passing object through another object

//using operator overloading
t1==t2;

}