//WAP in C++ to demonstrate default argument ambiquity 
#include<iostream>
using namespace std;
inline void fun(int i)
{
    cout<<i<<endl;
}
inline void fun(int i, int j=5)
{
    cout<<i<<","<< j<<endl;
}
int main()
{
fun(2,3);


}

// #include<iostream>
// using namespace std;
// inline void fun(int i)
// {
//     cout<<i<<endl;
// }
// inline void fun(int i, int j=5)
// {
//     cout<<i<< j<<endl;
// }
// int main()
// {
// fun(2);

// }