#include <iostream>

template <class T>
void foo() {
    static int a = 10;
    std::cout << ++a << std::endl;
}

int main()
{
    foo<int>();
    foo<int>();
    foo<int>();
    foo<char>();
    foo<bool>();
}
