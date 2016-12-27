#include <iostream>
#include <string>
#include "ex26_2.h"
void print(int n)
{
    std::cout << n << std::endl;
}

int main()
{
    print(compare(1, 2));
    return 0;
}
