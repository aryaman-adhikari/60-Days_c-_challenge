# namespace using scoperesolution
```

#include<iostream>
using namespace std;
namespace ns1
{
    void greet()
    {
        cout<<"This is ns1"<<endl;
    }
}
namespace ns2
{
    void greet()
    {
        cout<<"This is ns2"<<endl;
    }

}
int main()
{
  ns1::greet();
  ns2::greet();
}
```

# Using Directive
## Header
```
 namespace employee{
  int capacity=500;
   class employees{
    public:
    int total =350;
  
   };
 }


```
## Program
```
#include<iostream>
#include "using.hpp"
using namespace std;
 int main()
 {
    using namespace employee;
     employees e1;
 cout<<e1.total;
      return 0;
     
 }


```

# Using Decleration
```
#include<iostream>
using namespace std;
namespace ns1{
     void print()
     {
        cout<<"Print from ns1"<<endl;
     }
     void greet()
     {
        cout<<"Greet from ns1"<<endl;
     }
}

namespace ns2{
     void print()
     {
        cout<<"Print from ns2"<<endl;
     }
     void greet()
     {
        cout<<"Greet from ns2"<<endl;
     }
}
```
```
#include<iostream>
#include"using_declare.hpp"
using namespace std;
using namespace ns1;
int main()
{
    using ns2::print;

    print();  
    // using ns2::greet;

    greet();
    greet();

}

```
# Discontigious Namespace
```

#include<iostream>
using namespace std;
namespace ns1{
    char name[30];
    void get()
    {
        cout<<"Enter name :"<<endl;
        cin>>name;
        cout<<name;
    }

}

namespace ns2{
    int a=30;
}
using namespace ns1;
int main()
{
    using ns2::a;
    cout<<a<<endl;
  get();
}
```

# Nested Namespaces.
```

#include<iostream>
using namespace std;
namespace outer{
    int out=20;
    namespace inner{


        int a=30;
    }
}
int main()
{
  using outer::out;
  cout<<out<<endl;

  using outer::inner::a;
  cout<<a<<endl;
}
```
# Classes in Namespaces
```

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
```

# global Namespace
```
#include<iostream>
using namespace std;
int var=10; //in the global namespace 
namespace ns{
    int var=20;
}
int main()
{
 cout<<::var<<endl;
 cout<<ns::var<<endl;
}

```

# defining the member function outside namespace
```
#include<iostream>
using namespace std;
namespace ns1{
    void set();
    
    
    class printer{
      public:
      void get();

    };
}
void ns1::set()
{
    cout<<"This is ns1"<<endl;
}
void ns1::printer::get()
{
cout<<"This is ns1 printer"<<endl;
} 
int main()
{
 ns1::printer obj;
 ns1::set();
 obj.get();
}

```
# alias for namespace name
```
#include<iostream>
using namespace std;
namespace name{
    void get()
    {
        cout<<"THis is namespace"<<endl;
    }
    namespace name1{
        void get()
        {
            cout<<"This is nested"<<endl;   
     }
    }
}
namespace ns=name;
namespace ns1= name::name1; //either name or alias name i.e ns
int main()
{
 ns::get();
 ns1::get();
}
```

