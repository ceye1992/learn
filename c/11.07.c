//从第一个参数提取指定位数，并返回结果

#include <stdio.h>

unsigned int bitpat_get (unsigned int value, int n, int count)
{
    unsigned int result;
    int i;

    if(n < 0 || n > 32 || count < 0 || count + n > 32)  //不存在的情况
        return 0;

    //先把整个数项左移位, 因为约定最左位的起始编号为0，所以求得的是开始的数
    value <<= n;

    //  然后求得最后的值

    result = value >> (32 - count);

    return result;
}
