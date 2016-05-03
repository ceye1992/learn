//��source������λ��ʼ���ң���source���Ƿ����pattern������nλ��������־��ú������ؿ�ʼ��λ��������ߵ�Ϊλ��Ϊ0
//���û�оͷ���-1

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
