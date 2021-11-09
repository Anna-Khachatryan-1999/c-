#include <iostream>
int main() {
    const int a = 5;
    const int* b = &a;
    int* c = const_cast<int*>(b);
    ++* c;
    std::cout << a << *b << *c;
}
