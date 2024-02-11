#include<iostream>
#include<string>
using namespace std;
class teacher;
class student{
  int id;
  string name;
  friend class teacher;
};
class teacher{
 int idd;
 string namee;

public:
void access(student s)
{
  s.id=3;
  s.name="aryan";
  cout<<s.name<<s.id<<endl;

  idd=s.id;
  namee=s.name;
  cout<<idd<<namee;
}

};
int main()
{
    student obj;
    teacher obb;
    obb.access(obj);

}