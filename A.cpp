#include <iostream>
class Person {
public:
	Person() { std::cout << "default "; }
	Person(const Person&) { std::cout << "copy "; }
	Person& operator=(const Person&) { std::cout << "assignment "; }
	~Person() { std::cout << "destructor "; }
private:
    int x;
};
int main() {
	Person obj(Person());
	return 0;
}
