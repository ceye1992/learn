//此程序演示整数的循环移位

#include <stdio.h>

int main(void)
{
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
    unsigned int rotate(unsigned int value, int n);

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));

    return 0;
}

//此函数对一个无符号整数进行循环左移或者右移

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;

    //将移位量缩小到指定范围

    if(n > 0)
        n = n % 32;
    else
        n = -(-n % 32);

    if(n == 0)
        result = value;
    else if(n > 0){   //左移
        bits = value >> (32 - n);
        result = value << n | bits;
    }
    else{              //循环右移
        n = -n;
        bits = value <<(32 -n);
        result = value >> n | bits;
    }

    return result;
}
