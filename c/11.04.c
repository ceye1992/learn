//�˳�����ʾ������ѭ��λ��

#include <stdio.h>

int int_size(void)  //�������һ��int������λ��
{
    unsigned int bits;
    int          size = 0;

    bits = ~0;//���ɵ�����ȫ����1����

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

    //����λ����С��ָ����Χ

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
