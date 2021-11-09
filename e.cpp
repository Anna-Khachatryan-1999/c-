#include <iostream>

int j = 1;


namespace a{
int j = 6;
void f() {
    int j = 3;
    {
        int& i = a::j, j;
        j = 2;
        std::cout << i << j;
    };
}
};

int main()
{
    a::f();
}

