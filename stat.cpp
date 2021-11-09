#include <iostream>

class A
{
public:
    static int a;
    void foo() { std::cout << b; }
private:
    static int b;
};

int A::a = 0;
int A::b = 23;

int main()
{
    A a;
    a.foo();
    std::cout << A::a;
}



