//用数组的方法来生成质数
#include <stdio.h>

int main(void)
{
    int p[150], i, j;

    //将所有元素设定为0
    for(i = 2; i < 150; ++i)
        p[i] = 0;

    for(i = 2; i <= 150; ++i){
        for(j = 1; i * j <= 150; ++j)
            p[i * j] = 1;
    }

    for(i = 2; i < 150; ++i)
        if(p[i] == 0)
            printf("%i \n", i);

    return 0;
}
