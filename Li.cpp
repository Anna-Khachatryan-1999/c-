#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <fstream>
#include <thread>

int main()
{
    std::cout << std::thread::hardware_concurrency() << std::endl;
    return 0;
}
