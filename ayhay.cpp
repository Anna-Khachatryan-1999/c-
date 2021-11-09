#include <iostream>

class Eh
{
public:
    Eh(){
      virtual void foo()
      {
          std::cout<<3;
      };
    }
};


class A : public Eh
{

};

int main()
{
    Eh h;
}
