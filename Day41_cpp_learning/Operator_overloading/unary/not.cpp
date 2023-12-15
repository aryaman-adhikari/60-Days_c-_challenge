#include<iostream>
using namespace std;
class test {
int a,b;
public:
test()
{
    a=3;
    b=0;
}
void show()
{
 cout<<a<<b;
}

void operator!()
{
    a=!a;
    b=!b;
}
};
int main()
{
 test t;
 t.show();
 !t;
 t.show();

}