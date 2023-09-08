//friend function
#include<iostream>
using namespace std;
class student{
    private:
    int data;

    //constructor
    public:
    student(int value):data(value){};

    friend void fun_name(student myobj);      //declaring a friend function
};

//defining the function
void fun_name(student obj)
{
    cout<<"The value of private  data is:"<<obj.data<<endl;
}
int main()
{
    student obj(42);

    //calling the friend function
    fun_name(obj);
    return 0;
}