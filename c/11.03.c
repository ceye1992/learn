//����~0������λ��,Ҳ���Ǽ������һ��int������λ��

#include <stdio.h>

int int_size(void)
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


int main(void)
{
    int int_size(void);
    int w;

    w = int_size();

    printf("%i", w);

    return 0;
}
