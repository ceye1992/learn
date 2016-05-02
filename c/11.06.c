//从source的最左位开始查找，看source中是否出现pattern的最右n位，如果发现就让函数返回开始的位数，最左边的为位号为0
//如果没有就返回-1

#include <stdio.h>

int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
    unsigned int num1;
    int count = 0;

    num1 = pattern << (31 - n);

    if(source == num1)
        return 0;

    while ((source << 1) & num1 != num1 ){
        source <<= 1;
        ++count;
        if(count > 31 - n)
            return -1;
    }

    return count;
}
