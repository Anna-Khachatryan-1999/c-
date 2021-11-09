#include<iostream>

class Person
{
public:
    Person(int a = 0)
    {
        std::cout << __LINE__ << ", " << __func__ << std::endl;
    }
    Person(Person&& pers)
    {
        std::cout << __LINE__ << ", " << __func__ << std::endl;
    }
    Person(const Person& pers)
    {
        std::cout << __LINE__ << ", " << __func__ << std::endl;
    }
    void print()
    {
        std::cout << __LINE__ << ", " << __func__ << __FILE__<< std::endl;
    }
};

int main()
{
    Person p(Person(1));
    p.print();
    return 0;
}
