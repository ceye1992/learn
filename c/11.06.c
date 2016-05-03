//从source的最左位开始查找，看source中是否出现pattern的最右n位，如果发现就让函数返回开始的位数，最左边的为位号为0
//如果没有就返回-1

#include <stdio.h>

int int_size (void)
{
    int count= 0;
    unsigned int n = ~0;

    while(n){
        n >>= 1;
        ++count;
    }
    return count;
}

int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
    unsigned int num1;
    int m , count = 0;
    int int_size(void);

    m = int_size();

    num1 = pattern << (m - n);

    if(source == num1)
        return 0;

    while ((source & num1) != num1){
        source <<= 1;
        ++count;
        if(count > (m - n))
            return -1;
    }
    return count;
}


int main(void)
{
    int bitpat_search(unsigned int source, unsigned int pattern, int n);

    printf("%i", bitpat_search(0xe1f4, 0x5, 3));

    return 0;
}
