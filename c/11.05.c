#include <stdio.h>

//���nΪ�������򷵻�1�����NΪ���ء��򷵻�0

int bit_test(unsigned int value, int n)
{
    if(n < 0 || n > 31)
        return 0;
    else if((value >> (31 - n)) & 0x1)
        return 1;
    else
        return 0;
}

//���ؽ������е�Nλ�趨Ϊ���Ľ��

unsigned int bit_set(unsigned int value, int n)
{
    if( n < 0 || n > 31)
        return 0;

    return value | (1 << (32 - n));

}
