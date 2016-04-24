//经过修改的质数生成程序  主要在于如果一个数字不能被其他任意质数整除，那么他就是质数
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p, i, primes[50], primesIndex = 2;
    bool isprimes;

    primes[0] = 2;  //确定的两个质数
    primes[1] = 3;

    for(p = 5; p <= 50; p = p +2){           //跳过了能被2整除的所有
        isprimes = true;

        for(i = 1; isprimes && p / primes[i] >= primes[i]; ++i)  //判断能否被小于其平方根的质因数整除
            if(p % primes[i] == 0)
                isprimes = false;

        if(isprimes == true){      //建立质数表
            primes[primesIndex] = p;
            ++primesIndex;
        }
    }

    for(i = 0; i < primesIndex; ++i)
        printf("%i ", primes[i]);

    printf("\n");

    return 0;
}
