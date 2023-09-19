//friend function with two classes
#include<iostream>
using namespace std;
class teacher;  // to inform compiler that there is another class called teacher(forward decleration)
class student{
private:
int data ;

public:
void setdata(int i)
{
    data=i;
}

//friend function
friend void frnd_function(student,teacher);
};
class teacher{
  private:
  int data;

 public:
  void setdata(int i)
  {
    data=i;
  }
//declaring friend function
friend void frnd_function(student,teacher);
  
};

//printing the data or accessing the data using friend function definitation
void frnd_function(student obj1,teacher obj2)
{
    cout<<"The value at data is:"<<obj1.data<<endl;
     cout<<"The value at data is:"<<obj2.data<<endl;
}
int main()
{
 student obj1;
 teacher obj2;

 obj1.setdata(42);
 obj2.setdata(41);

 //calling 
 frnd_function(obj1,obj2);
}