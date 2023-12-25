#include<iostream>
using namespace std;
template<class T>
class test{
    T a;
public:
test(T a):a{a}{}
T print();
};
template<class T>
T test<T> ::print()
{
    
    return a;
}
int main()
{
   test<int> obj1(2);
   test<double> obj2(3.44);
   cout<<obj1.print()<<endl;
   cout<<obj2.print();
}