#include <iostream>
#include <vector>

int avoidObstacles(std::vector<int> inputArray) {
    int j = 2;
    for (int i = 0; i < inputArray.size(); ++i) {
        if (inputArray[i] % j == 0) {
            ++j;
            i = -1;
        }
    }
    return j;
}
int main()
{
    std::vector<int> v1 = {1000, 999};
    std:: cout << avoidObstacles(v1) << std::endl;
}
