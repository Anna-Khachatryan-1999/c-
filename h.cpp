#include <iostream>

struct F
{
    F(int x1){x = x1;}
    int x;
};


int main()
{
    F x(1);
    F x1 = x;

}
