#include <iostream>

int main()
{
    int* a = new int;
    *a = 4;
    delete a;
    a = nullptr;
    int& b = *a;
    std::cout << b << std::endl;

}
