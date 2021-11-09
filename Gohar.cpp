#include <iostream>
#include <string>

int fu(std::string str)
{
    unsigned int a = 0;
    for (int i = 0; i < str.size(); ++i) {
        //miayn poqratareri hamar
        if (!(a & 1 << (str[i] - 'a'))) { //'a' kam 97
            a |= (1 << (str[i] - 'a'));
        } else {
            return true;
        }
    }
    return false;

}

int main()
{
    std::string str;
    std::cin >> str;
    std::cout << fu(str) << std::endl;
}
