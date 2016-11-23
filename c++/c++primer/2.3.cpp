#include <iostream>
int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;  //正常32
    std::cout << u - u2 << std::endl;  //应该为-32与unsigned最大值的模

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;  //32
    std::cout << i - i2 << std::endl;  //-12
    std::cout << i - u << std::endl;   //算术中既有int又有unsigned时，会把int转换成无符号的，0
    std::cout << u - i << std::endl;  //同上，为0


    return 0;
}
