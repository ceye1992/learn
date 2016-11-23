#include <iostream>
int main()
{
    int sum = 0;
    //´Ó-100¼Óµ½100
    for (int i = -100 ; i <= 100 ; ++i)
        sum += i;
    std::cout << "sum of -100 to 100 inclusive is "
              <<sum << std::endl;

    return 0;
}
