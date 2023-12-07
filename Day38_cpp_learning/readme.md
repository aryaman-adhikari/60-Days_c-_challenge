# Polymorphism
> Polymorphism in C++ means different forms of an entity either that is function or operator to operate  differently in different situations.
## There are two types of polymorphism.
# Compile time polymorphism.
>  This is also called static binding or early binding.
1. function overloading.
2. Operator overloading.

```
#include<iostream>
using namespace std;
class A{
    int a,b,c;
public:
void sum(int a, int b)
{
    cout<<"The sum is :"<<a+b<<endl;
}

void sum(int a, int b, int c)
{
    cout<<"The sum is :"<<a+b+c<<endl;
}
};
int main()
{
A obj;
obj.sum(2,3);
obj.sum(2,3,4);

}

```

# Run time Polymorphism
> This is also called dynamic or late binding.
1. Function Overridng.
2. Virtual functions.

> Function overriding occurs in the condition in which the definition of function is same in base class and derived class . Since the call to the function is determined at runtime .

```
#include<iostream>
using namespace std;
class A{
public:
void sum()
{
    cout<<"THis is base"<<endl;
}
};
class B:public A
{
    public:
    void sum()
    {
        cout<<"This is derived "<<endl;
    }
};
int main()
{
 A obj;
 B objj;
 obj.sum();
 objj.sum();
}

```

# virtual function
```

#include<iostream>
using namespace std;
class A{
public:
virtual void display()
{
    cout<<"It is baase Class"<<endl;
}
};
class B: public A{
public:
virtual void display()
{
    cout<<"It is B derived Class"<<endl;
}
};
class C: public A{
public:
virtual void display()
{
    cout<<"It is C derived Class"<<endl;
}
};
int main()
{
A *p1=new A();
A *p2=new B();
A *p3=new C();

//accessing
p1->display();
p2->display();
p3->display();


delete p1;
delete p2;
delete p3;


}
```

# Virtual destructor
> To delete the derived class object properly using base class pointer we use virtual destructors. 
```
#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()
{
    cout<<"It is baase Class"<<endl;
}
 virtual ~ A()
{
    cout<<"Base class destructor"<<endl;
} 
};
class B:public A{
public:
virtual void display()
{
    cout<<"It is Class B"<<endl;
}
virtual  ~ B()
{
    cout<<"Class B destructor is Called"<<endl;
}
};
class C: public A{
public:
virtual void display()
{
    cout<<"It is Class C"<<endl;
}
virtual  ~ C()
{
    cout<<"Class C destructor is Called"<<endl;
}
};
int main()
{
 A *p1=new A();
 A *p2=new B();
 A *p3=new C();

delete p1;
delete p2;
delete p3;
 
}

```


# Using override specifiers
```
#include<iostream>
using namespace std;
class A{
public:
virtual void display()
{
    cout<<"THis is base"<<endl;
}
};
class B: public A{
public:
virtual void display() override
{
    cout<<"THis is derived"<<endl;
}
};

int main()
{
    A *p=new A();
    B *p1=new B();
    

    p->display();
    p1->display();
}
```

# Using final specifier
```
#include<iostream>
using namespace std;
class A final{
public:
virtual void display()
{
    cout<<"This is base"<<endl;
}
};
// class B: public A{

// };
class base{
public:
virtual void display ()final
{
    cout<<"This is base"<<endl;
}
};
// class derived : public base{
// public:
// virtual void display()
// {
//     cout<<"This is derived"<<endl;
// }
// };
```

 