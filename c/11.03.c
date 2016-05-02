//返回~0包含的位数,也就是计算机上一个int包含的位数

#include <stdio.h>

int int_size(void)
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


int main(void)
{
    int int_size(void);
    int w;

    w = int_size();

    printf("%i", w);

    return 0;
}
