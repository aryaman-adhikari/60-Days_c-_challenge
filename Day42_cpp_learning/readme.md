# Consructor
# Default and paramaterized.
```

#include<iostream>
#include<string>
using namespace std;
class test{
    int a,b;
    int x;
    string name;
    public:
    test()
    {
        cout<<"Hi this is default Constructor "<<endl;
        a=5;
        b=6;
    }
    void show()
    {
        cout<<a<<endl<<b<<endl;
    }


    
    //paramaterized constructor
    test(int a, string nam)
    {
       x=a;
       name=nam;
    }
  void showw()
  {

   
cout<<name<<x;
  }




};
int main()
{
   
    test obj;
    obj.show();
    test obj1(3,"aryan");   // test obj =test(3, "aryan"); //explicit invoke
    obj1.showw();


   

}
```

# Copy Constructor
```
#include<iostream>
using namespace std;
class test{
    int x,y;
 public:
 test(int a , int b)
 {
 x=a;
 y=b;
 }

 void show()
 {
    cout<<x<<y<<endl;
 }
 //copy 
 test(test &o)
 {
    x=o.x;
    y=o.y;

 }
};
int main()
{
    test obj=test(3,21);
    obj.show();
    test obj1(obj);
    obj1.show();

}

```

# Destructor
```
#include<iostream>
using namespace std;
class test{
    int real,imag;
 public:
 test(int a, int b)
 {
    real=a;
    imag=b;
 }
 void show()
 {
    cout<<real<<"+"<<imag<<"i"<<endl;
 }
~test()
{
    cout<<"Destructor"<<endl;
}
};
int main()
{
    test obj(3,4);
    obj.show();
    test obj1(3,4);
    obj1.show();

    return 0;

}
```
# Passing by Reference and passing by pointer
 - Passing by reference
 ```
 #include<iostream>
using namespace std;
class test{
    int real ,imag;
 public:
void getdata(int a, int b);
void showdata();
void getobj(test &obj, test &obj1);
};
void test::getdata(int a,int b)
{
    real=a;
    imag=b;
}
void test::showdata()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
void test:: getobj(test &obj,test &obj1)
{
    real=obj.real + obj1.real;
    imag=obj.imag +obj1.imag;
}
int main()
{
 test t1,t2,t3;
 t1.getdata(3,5);
 t1.showdata();
 t2.getdata(4,5);
 t2.showdata();
 t3.getobj(t1,t2);
 t3.showdata();

}
 
 ```

 # Pass by Pointer
 ```
 #include<iostream>
using namespace std;
class test{
    int real ,imag;
 public:
void getdata(int a, int b);
void showdata();
void getobj(test *obj, test *obj1);
};
void test::getdata(int a,int b)
{
    real=a;
    imag=b;
}
void test::showdata()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
void test:: getobj(test *obj,test *obj1)
{
    real=obj->real + obj1->real;
    imag=obj->imag +obj1->imag;
}
int main()
{
 test t1,t2,t3;
 t1.getdata(3,5);
 t1.showdata();
 t2.getdata(4,5);
 t2.showdata();
 t3.getobj(&t1,&t2);
 t3.showdata();

}
 
 ```
 # Constructor Overloading
 ```
 #include<iostream>
using namespace std;
class test{
int a,b;
public:
test()
{
    cout<<"this is default"<<endl;
}
test(int x, int y)
{
    a=x;
    b=y;
    cout<<a<<b<<endl;
}
test(int x, int y, int z, int u)
{
  cout<<x<<y<<z<<u<<endl;
}
};
int main()
{
    test o; //automatically default constructor
 test obj=test(2,3);

 test objj(2,3,4,5);
 

}
 ```
 # default argument in constructor
 ```
 
 #include<iostream>
using namespace std;
class test{
    int a,b;
 public:
 test(int x, int y=2)
 {
 a=x;
 b=y;

 cout<<a<<b<<endl;
 }

};
int main()
{
test obj(2);
test objj(3,4);

}
 ```

 
