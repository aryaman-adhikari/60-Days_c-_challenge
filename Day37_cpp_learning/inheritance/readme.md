# Inheritance

# Single
```

#include<iostream>
using namespace std;
class A{
char name[30]="Aryaman";
public:
 void display()
 {
    cout<<"The name is :"<<name<<endl;
 }
};

class B: public A{
public:
void display()
{
  A::display();
}
};
int main()
{
B obj;
obj.display();
}
```

# Multiple
```
#include<iostream>
using namespace std;
class A{
    protected:
  int a,b;
  public:
  void get()
  {
    cout<<"Enter the value of a and b first :"<<endl;
    cin>>a>>b;

  }  
};
class B{
    protected:
int c,d;
public:
void gets()
{
    cout<<"Enter the value of c and d :"<<endl;
    cin>>c>>d;

}
};

class C:public A, public B{
int sum;
public:
void total()
{
    sum=a+b+c+d;
    cout<<"The Total is :"<<sum;
}
};
int main()
{
C obj;
obj.get();
obj.gets();
obj.total();

}

```
# multilevel
```
#include<iostream>
using namespace std;
class A{
protected:
int age;
char name[30];

public:
void get()
{
    cout<<"Enter the name and age :"<<endl;
    cin>>name>>age;
}
};
class B:public A{
protected:
int math,c;
public:
void gets()
{
    cout<<"Enter the marks in math and C :"<<endl;
    cin>>math>>c;
}
};
class C: public B{
    int total;
public:
void display()
{
    cout<<"Name :"<<name<<"   Age :"<<age <<endl;
    total=math+c;
    cout<<"The marks is :"<<total;
}

};
int main()
{
C obj;
obj.get();
obj.gets();
obj.display();
}

```

# Hierarchical
```
#include<iostream>
using namespace std;
class A{

public:
void get()
{
    cout<<"This is base"<<endl;
}
};
class b: public A{
public:
void display_name()
{
    cout<<"The name is aryan"<<endl;
}
};
class c: public A{
public:
void display_age(){
    cout<<"The Age is 20";
}
};
int main()
{
 b obj;
 c oj;
 obj.get();
 obj.display_name();
 oj.display_age();
}

```

# Hybrid
```
#include<iostream>
using namespace std;
class student{
protected:
char name[30];
public:
void get()
{
    cout<<"Enter the name of student :"<<endl;
    cin>>name;
}
};
class mark:public student{
protected:
int math, science;
public:
void gets()
{
    cout<<"Enter the marks of math and science :"<<endl;
    cin>>math>>science;
}
};
class practical{
    protected:
    int pramark;
public:
void getss()
{
    cout<<"Enter the practical marks :"<<endl;
    cin>>pramark;
}

};
class result: public mark, public practical{
public:
int total;
void display()
{
    cout<<"The name is :"<<name<<endl;
   total=pramark+math+science;
   cout<<"The mark is :"<<total<<endl;   
}} ;
int main()
{
result obj;
obj.get();
obj.gets();
obj.getss();
obj.display();
}

```