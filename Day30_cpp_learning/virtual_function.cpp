//demonstrate virtual function in C++
#include<iostream>
using namespace std;
class vehicle{
public:
virtual void information ()   //making this function virtual
{
cout<<"This is Base virtual function "<<endl;
}



};
//creating another class
class car : public vehicle{
public:
void information()override
{
cout<<"This is car derived class "<<endl;
}
};
//creating another class bike
class bike : public vehicle{
public:
void information() override{
    cout<<"This is bike derived class "<<endl;
}
};
int main()
{
//creating the object of car class
car obj;
bike obj1;

//calling the information function of bike class
obj1.information();

//calling the information function of car class
obj.information();

}
// in this program the bike and the car class overrides the information function to provide details about the specific vehicle.
