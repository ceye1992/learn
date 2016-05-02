#include <stdio.h>

//如果n为“开”则返回1，如果N为“关”则返回0

int bit_test(unsigned int value, int n)
{
    if(n < 0 || n > 31)
        return 0;
    else if((value >> (31 - n)) & 0x1)
        return 1;
    else
        return 0;
}

//返回将整数中第N位设定为开的结果

unsigned int bit_set(unsigned int value, int n)
{
    if( n < 0 || n > 31)
        return 0;

    return value | (1 << (32 - n));

}
