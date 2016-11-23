#include <iostream>

int main()
{
    //输入两个数字，打出两个数字范围内的整数
    int val1 = 0 , val2 = 0;
    std::cout << "Enter two numbers: " <<std::endl;
    std::cin >> val1 >> val2;

    if(val1 > val2){ //如果val1是最大的
        for(val2; val2 <= val1; ++val2)
            std::cout << val2 << std::endl;
    }
    else{
        for (val1; val1 <= val2; ++val1)
            std::cout << val1 <<std::endl;
    }

    return 0;
}
