#include <iostream>
int main()
{
    int sum = 0;
    //��-100�ӵ�100
    for (int i = -100 ; i <= 100 ; ++i)
        sum += i;
    std::cout << "sum of -100 to 100 inclusive is "
              <<sum << std::endl;

    return 0;
}
