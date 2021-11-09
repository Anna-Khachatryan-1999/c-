#include <iostream>
#include <string>

struct f
{
    f(){}
    f operator()(){
        return f();
    }
    operator int() {
        return 8;
    }
};

int main()
{
    std::cout << f()()()()()()()() << std::endl;
    return 0;
}
