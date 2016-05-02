//此程序演示整数的循环位移

#include <stdio.h>

int int_size(void)  //计算机上一个int包含的位数
{
    unsigned int bits;
    int          size = 0;

    bits = ~0;//生成的整数全部由1构成

    while(bits){
        ++size;
        bits >>= 1;
    }

    return size;
}

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;
    int w = int_size();

    //将移位两缩小到指定范围

    if (n > 0)
        n = n % w;
    else
        n = - (-n % w);

    if(n == 0)
        result = value;
    else if(n > 0){
        bits = value >> (32 - n);
        result = value << n | bits;
    }
    else{
        bits = value << (32 - n);
        result = value >> n | bits;
    }

    return result;
}
