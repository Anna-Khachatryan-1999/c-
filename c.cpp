#include <iostream>

int foo(const int& a1, int& a2)
{
    int ret = a1;
    a2 = 1;
    ret += a1;
    return ret;
}

int main()
{
    int a = 0;
    std::cout << foo(a, a) << std::endl;
    return 0;
}
