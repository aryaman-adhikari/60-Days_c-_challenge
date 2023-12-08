# Friend Function (one class)
```

#include<iostream>
using namespace std;
class A{
int real,imag;

friend void display(A obj);
};
void display(A obj)
{
    cout<<"Enter the real and imag:  "<<endl;
    cin >>obj.real>>obj.imag;
 int sum= obj.real + obj.imag;
 cout<<sum;
}

int main()
{
 A obj;
 
 display(obj);
}

```
# Friend Function ( Two Class)
```
#include<iostream>
using namespace std;
class complex2; //forward decleration

class complex1{
int real,imag;
friend void display(complex1 obj1, complex2 obj2);
};
class complex2{
int real,imag;
friend void display(complex1 obj1, complex2 obj2);
};
void display(complex1 obj1, complex2 obj2)
{
  cout<<"Enter the real and imaginary for complex one :"<<endl;
  cin>>obj1.real>>obj1.imag;
  cout<<"Enter the real and imaginary for complex two :"<<endl;
  cin>>obj2.real>>obj2.imag;

cout<<obj1.real+obj2.real<<" + "<<obj2.imag+obj1.imag<<"i"<<endl;
}
int main()
{
 complex1 obj;
 complex2 objj;
 display(obj,objj);
 
}
```
# friend Class
```
#include<iostream>
using namespace std;
class B;
class A{
int a;

friend class B;
};
class B{
    int b;
   
    public:
 void display(A obj)
 {
    obj.a=50;
    b=obj.a;
    
       
 }
 void disp()
 {
    cout<<"The value is :"<<b;
 }

};
int main()
{
A o;
B ob;
ob.display(o);
ob.disp();
}

```

> Another Example 
```
#include<iostream>
using namespace std;
class B;
class A{
char name[30];
friend class B;
};
class B{
A obj;
public:
void display()
{
    cout<<"Enter name: "<<endl;
    cin>>obj.name;
    cout<<"The name is :"<<obj.name<<endl;

}
};
int main()
{
    B ob;
    ob.display();
}

```

