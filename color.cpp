#include <iostream>
#include <stdlib.h>


int main() {

    /*std::cout << "\033[131mbold red text\033[0m\n";
    system("Color 33");*/
    const std::string red("\033[11;33m");
    const std::string reset("\033[0m");
    std::cout << red << "red text" << reset << std::endl;
}
