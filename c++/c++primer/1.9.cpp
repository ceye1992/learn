#include <iostream>

int main()
{
    int sum = 0, val = 50;
    //计算50到100的和
    while( val <= 100 ){
        sum += val;
        ++val;
    }

    std::cout << "The sum of 50 to 100 inclusive is "
              << sum << std::endl;

    return 0;
}
