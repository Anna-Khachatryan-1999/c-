#include <iostream>

template <int n>
int foo()
{
    return n * foo<n-1>();
}

template<>
int foo<0>()
{
    return 1;
}

int main()
{
    int x = foo<5>();
    std::cout << x << std::endl;
}
