#include <iostream>

int main()
{
    //计算50到100的和
    int sum1 = 0;
    for (int i = 50; i <= 100; ++i)
        sum1 += i;
    std::cout << "The sum of 50 to 100 is"
              << sum1 << std::endl;

    //顺序打印出10到0之间的整数
    for (int i1 = 10; i1 >= 0; --i1)
        std::cout << i1 << std::endl;

    //提示输入两个整数，打印范围内的所有整数
    int val1 = 0, val2 = 0;
    std::cout << "Enter two numbers(small and big): " <<std::endl;
    std::cin >> val1 >> val2;

    for(val1; val1 <= val2; ++val1)
        std::cout << val1 << std::endl;

    return 0;

}
