#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string in = "a.txt";
    std::string str;
    std::string str1{};
    std::ifstream input(in);
    while (std::getline(input, str)) {
        str1 += str;
    }
    std::cout << str1 << std::endl;
    return 0;
}
