# Operator Overloading
>  It is a process of performing certain tasks by using operator instead of using function by adding additional tasks to the existing operator is called overloading.
> We cannot change the basic meaning of operator using operator overloading and we also cannot create an operator using operator overloading.
> In general, we pass object as argument in the operator overloading and at least one user-define data type should be provided in operator overloading.
> Operator or function should be the member of same class.
> scope resolution :: , size of(), ternary ,member accessing(. *) operator's cannot be overloaded.

# Syntax
```
return_type operator operator_sign(argument....)
{
    //statements;
    return val;
}

```

# Examples:
# Equality Operator
> Equals Operator
```
#include<iostream>
using namespace std;
class test{
    int a;
    public:
void get()
{
    cin>>a;
}


    void operator==(test obj)
    {
  if(a==obj.a)
  {
    cout<<"Equal"<<endl;

  }
  else{
    cout<<"Not Equal"<<endl;
  }
    }
    // void compare(test obj)
    // {
    //     if(a==obj.a)
    //     {
    //         cout<<"Equal"<<endl;
    //     }
    //     else{
    //         cout<<"Not Equal"<<endl;
    //     }
    // }
};
int main()
{
test t1,t2;
cout<<"Enter the value for t1 object :"<<endl;
t1.get();
cout<<"Enter the value for t2 object :"<<endl;
t2.get();
// t1.compare(t2);  //passing object through another object

//using operator overloading
t1==t2;

}

```

> Not Equals Operator(!=)
```
#include<iostream>
using namespace std;
class test
{
int a;
public:
void get()
{
    cin>>a;
}

void operator !=(test obj)
{
  if(a!=obj.a)
  {
    cout<<"Not equal"<<endl;
  }
  else{
    cout<<"Equal"<<endl;
  }
}
};
int main()
{
test t1,t2;
t1.get();
t2.get();

t1!=t2;

}
```

# Binary Operators
```
#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
void show()
{
    cout<<a;
}
test operator +(test obj)
{
    test t3;
  t3.a=a+obj.a;
  return t3;

}
test operator -(test obj)
{
    test t3;
    t3.a=a-obj.a;
    return t3;
}

test operator *(test obj)
{
    test t3;
    t3.a=a*obj.a;
    return t3;
}

test operator /(test obj)
{
    test t3;
    t3.a=a/obj.a;
    return t3;
}

test operator %(test obj)
{
    test t3;
    t3.a=a%obj.a;
    return t3;
}
};
int main()
{
test t1,t2,t3;
t1.get();
t2.get();
t3 = t1+t2;
t3.show();

t3=t1-t2;
t3.show();

t3=t1*t2;
t3.show();

t3=t1/t2;
t3.show();

t3=t1%t2;
t3.show();

}
```

# Unary Operators
> Those operators that perform operation on a single operands and gives a new value .
1. unary minus (-).
2. Increment (++).
3. Decrement (--).
4. Not(!);

```
1.
#include<iostream>
using namespace std;
class test{
    int a,b;
public:
void get()
{
    cin>>a>>b;
}
void show()
{
    cout<<a<<b;
}
void operator -()
{
  a=-a;
  b=-b;
}

};
int main()
{
test t;
cout<<"Enter a and b:"<<endl;
t.get();
cout<<"Before :"<<endl;
t.show();
-t;
cout<<"After"<<endl;
t.show();

}
```

2.
```
#include<iostream>
using namespace std;
class test{
 int a;
 public:
 test()
 {
    a=0;
 }
 void show()
 {
    cout<<a<<endl;
 }
 void operator++(){
    //pre increment
    a=a+1;
 }

 void operator ++(int)
 {
    //post increment
    a=a+1;
 }
};
int main()
{
    test t;
    t.show();
    ++t;
    t.show();
    t++;
    t.show();
}

```

3.
```
#include<iostream>
using namespace std;
class test{
 int a;
 public:
 test()
 {
    a=3;
 }
 void show()
 {
    cout<<a<<endl;
 }
 void operator--(){
    //pre increment
    a=a-1;
 }

 void operator --(int)
 {
    //post increment
    a=a-1;
 }
};
int main()
{
    test t;
    t.show();
    --t;
    t.show();
    t--;
    t.show();
}
```

4.
```
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

```

# Assignment Operator
1. Assignment operator
```
#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
void operator =(test obj)
{
   a=obj.a;
}
void show()
{
    cout<<a<<endl;
}
};
int main()
{
    test t1,t2;
    t2.get();
  t1=t2;
  t1.show();
  t2.show();
}

```
2. shorthand operators
```
#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
void operator  +=(test obj)
{
    a=a+obj.a;
}
void operator -=(test obj)
{
    a=a-obj.a;
}

void operator *=(test obj)
{
    a=a*obj.a;
}
void operator/=(test obj)
{
    a=a/obj.a;
}
void operator %=(test obj)
{
    a=a%obj.a;
}
void show()
{
    cout<<a<<endl;
}
};
int main()
{
    test t1,t2;
    t1.get();
    t2.get();
    t1+=t2;
    t1.show();
    t1-=t2;
    t1.show();
    t1*=t2;
    t1.show();
    t1/=t2;
    t1.show();
    t1%=t2;
    t1.show();

 
}
```
# Comparison Operator
```
#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
int  operator >(test obj)
{
    if(a>obj.a)
    {
        return 1;
    }
    else
    return 0;
}

int  operator <(test obj)
{
    if(a<obj.a)
    {
        return 1;
    }
    else
    return 0;
}


int  operator >=(test obj)
{
    if(a>=obj.a)
    {
        return 1;
    }
    else
    return 0;
}

int  operator <=(test obj)
{
    if(a<=obj.a)
    {
        return 1;
    }
    else
    return 0;
}
};
int main()
{
 test t1,t2;
 t1.get();
 t2.get();
 if(t1>t2){
    cout<<"greater"<<endl;
 }
 if(t1<t2){
    cout<<"less"<<endl;
 }
 if(t1>=t2){
    cout<<"greater than equal to"<<endl;
 }
 if(t1<=t2){
    cout<<"less than equal to"<<endl;
 }
}
```

# Logical Operator
```
#include<iostream>
using namespace std;
class test{
int a;
public:
void get()
{
    cin>>a;
}
int operator &&(test obj)
{
 int x;
 x=a&&obj.a;
 return x;
}

int operator ||(test obj)
{
 int x;
 x=a||obj.a;
 return x;
}
void operator !()
{
 
a=!a;
}
void show()
{
    cout<<a;
}
};
int main()
{
test t1,t2;
t1.get();
t2.get();

cout<<"After "<<endl;
int y=t1&&t2;
cout<<y<<endl;

int z=t1 ||t2;
cout<<z<<endl;

!t1;
t1.show();
}

```
# Overloading insertion and extraction operator
```
#include<iostream>
using namespace std;
class stu{
    int id;
    char name[30];
public:
friend void operator <<(ostream &out, stu &s);
friend void operator >>(istream &in, stu &s);
};

void operator <<(ostream &out, stu &s)
{

    out<<"Name:"<<s.name<<"Id:"<<s.id<<endl;
}
void operator >>(istream &in , stu &s)
{

    cout<<"Enter the  name and id :"<<endl;
    in>>s.name>>s.id;
}
int main()
{
 stu obj;
 cin>>obj;
 cout<<obj;
 
}
```
