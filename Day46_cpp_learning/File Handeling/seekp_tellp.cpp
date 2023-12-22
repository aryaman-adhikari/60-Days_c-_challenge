#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file("Copied.txt", ios::out|ios::app);
    if(file.is_open())
    {
        file<<"Initial";
    file.seekp(0,ios::end);
    int cur;
    cur = file.tellp();
    cout<<cur;

    //adding
    file<<"Added data";
    file.close();

    }
    else{
        cerr<<"Error";
        return -1;
    }
    return 0;

}