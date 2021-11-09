//#include <iostream>

/*struct override {};

struct Base {
    virtual override f() = 0;
};

struct Derived : Base {
    virtual auto f()->override {
            std::cout << 1;
            return override();
    }
};


template <typename T>
void adl(T) {
    std::cout << "T";
}

struct S{};

template <typename T>
void call_adl(T t) {
    adl(S());
    adl(t);
}

void adl(S) {
    std::cout << "S";
}
int main () {
    int override;
   // call_adl(S());
   // Derived().f();
}*/











#include <functional>
#include <iostream>

template <typename T>
void call_with(std::function<void(T)> f, T val) {
    f(val);
}

int main() {
    auto print = [](int x) { std::cout << x; };
    call_with<int>(print, 42);
}

/*
#include <iostream>

template <typename T>
void foo(T...) { std::cout << 'A'; }

template <typename... T>
void foo(T...) { std::cout << 'B'; }

int main() {
    foo(1);
    foo(1, 2);
}*/
























