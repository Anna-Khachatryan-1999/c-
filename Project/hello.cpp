#include <iostream>

extern const char *getMassage();

void greet()
{
    std::cout << getMassage() << "\n";
}

int main()
{
    greet();
    return 0;
}
