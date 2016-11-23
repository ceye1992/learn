#include <iostream>
int main()
{
    //使用while循环将50到100的整数相加
    int i = 50, sum = 0;
    while(i != 100)
        sum += i, ++i;
    std::cout << sum <<std::endl;

    return 0;
}
