#include <iostream>

void factorial();

class Start {
public:
    Start() {
        factorial();
    }
};

Start start;

int main() {}

void factorial()
{
    int n = 0;
    std::cin >> n;
    int s = 1;
    for(int i = 1; i <= n; ++i) {
        s *= i;
    }
    std::cout << "Factorial = " << s << std::endl;
}
