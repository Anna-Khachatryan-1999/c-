/*#include <iostream>

class A
{
public:
   virtual void fo(){} ;
    int x;
};

class B : public A
{
public:
    void c(){}
    int y;
    int t;
};

int main()
{
    B* bb = new B();
    A* bc;
   // A* ba = new A();
    if (dynamic_cast<A*>(bb)) {
        A* ba = dynamic_cast<A*>(bb);
    } else {
        std::cout << "Hi Hayko" << std::endl;
    }
}*/

/*#include <stdio.h>
int main()
{
switch(printf("Hi-"))
{
case 1: printf("A"); break;
case 2: printf("B"); break;
case 3: printf("C"); break;
default:  printf("default");
}
return 0;
}*/

/*class A
{

static const int x() {return 1;};
};

int main(){}*/

class A
{
    public:
        virtual ~A() {}
};

class B{};


int main()
{
    B c;
    B* b = new B();
    A& a = dynamic_cast<A&>(*b);
}


