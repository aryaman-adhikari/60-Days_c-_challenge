#include<iostream>
using namespace std;
namespace ns{
   class printer;
}
class ns::printer{
    public:
 void print()
    {
        cout<<"Hi this is print"<<endl;
    }
};
int main()
{
 ns::printer obj;
 obj.print();
}