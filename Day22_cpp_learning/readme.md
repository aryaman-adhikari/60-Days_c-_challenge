# Types of Inheritance
1. Single Inheritance.
2. Multiple Inheritance.
3. Multilevel Inheritance.
4. Hierarchical Inheritance.
5. Hybrid Inheritance.

# Single Inheritance.
>It is a form of inheritance in C++ in which a single base class is inherited by a derived class.
>Example:
```
//single inheritance
#include<iostream>
using namespace std;
class base{
public:
void access()
{
    cout<<"It is base"<<endl;
}
};
//making single inheritance
class derived:public base{
public:
void derive()
{
    cout<<"This is derived"<<endl;
}
};
int main()
{
    derived obj;
    obj.access();
    obj.derive();
}
```
- Before moving forward let's learn about the visibility modes in both base and derived classed.
<img src="visibility_mode.png">

# Multi level Inheritance
> When one class inherites from base class which is further inherited by another classes is known as multiple inheritance in C++.
>Example:
```
//multi level inheritance in C++
#include<iostream>
using namespace std;
class animal{
public:
void anim()
{
    cout<<"This is main base class"<<endl;
}
};
//creating first derived class
class dog:public animal{
public:
void dogg()
{
    cout<<"This is dog derived class"<<endl;
}
};

//creating second derived class from dog base class(dog is base for this derived class)
class breed:public dog{
public:
void bred()
{
    cout<<"This is breed x2 derived class"<<endl;
}
};
int main()
{
    breed obj;
    obj.bred();
    obj.dogg();
    obj.anim();

}
```
- This example clarifies the example of multi level inheritance.
# Multiple Inheritance
> In simple term, multiple inheritance is the process of deriving a new class which contains the attributes or members of more than one base classes.
>Example:
```
//multiple inheritance in C++
#include<iostream>
using namespace std;
class A{
public:
void a()
{
    cout<<"This is first base class"<<endl;
}
};
//creating another base class
class B{
public:
void b()
{
    cout<<"This is second base class"<<endl;
}
};
//creating multiple inheritance
class C:public A,public B
{
    public:
   void c()
   {
    cout<<"This is derived class"<<endl;
   }
};
int main()
{
 C obj;
 obj.c();
 obj.b();
 obj.a();
}
```
# Ambiquity Resolution
> Ambiquity can be occured in the  multiple inheritance when the name of the same function occurs in the base classes.
> It can be resolved by giving class resolution operator ::
>Example:
```
#include<iostream>
using namespace std;
class A{
public:
void a()
{
    cout<<"This is A"<<endl;
}
};
class B{
    public:
    void a()
    {
        cout<<"This is B"<<endl;
    }
};
class C:public A,public B{
    public:
    void c()
    {
        cout<<"This is C"<<endl;
    }
};
//in this type of case a ambiquity is occured .
//to resolve it we can use :: operator

int main()
{
C obj;
obj.c();
obj.A::a();
obj.B::a();
}
```
# Ambiquity in simgle inheritance
>Example:
```

#include<iostream>
using namespace std;
class animal{
public:
void ani()
{
    cout<<"This is base"<<endl;
}
};

class dog:public animal{
public:
void ani()
{
    cout<<"THis is dog"<<endl;
}
};
int main()
{
dog obj;
obj.ani();
//for thefunction of class Animal
obj.animal::ani();
}
```

# Hybrid Inheritance
>Hybrid inheritance is the inheritance with more than one type of inheritance.
>Example:
```
#include<iostream>
using namespace std;
class A{
public:
void a()
{
    cout<<"This is A"<<endl;
}
};

class B:public A{
    public:
    void b()
    {
        cout<<"This is B"<<endl;
    }
};

class C{
    public:
    void c()
    {
        cout<<"This is C"<<endl;
    }
};

class D:public B,public C{
public:
void d()
{
    cout<<"This is D"<<endl;
}
};


int main()
{
D obj;
obj.a();
obj.b();
obj.c();
obj.d();
}

```

# Hierarchical Inheritance
> The process of deriving more than one class from base class is hierarchical inheritance.
>Example:
```
#include<iostream>
using namespace std;
class A{
public:
void a()
{
    cout<<"This is A"<<endl;
}
};
class B:public A{
    public:
    void b()
    {
        cout<<"This is B"<<endl;
    }
};

class C: public A{
    public:
    void c()
    {
        cout<<"This is C"<<endl;
    }
};
int main()
{
C obj;
obj.a();
B obj1;
obj1.a();

}

```