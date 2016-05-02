//��source������λ��ʼ���ң���source���Ƿ����pattern������nλ��������־��ú������ؿ�ʼ��λ��������ߵ�Ϊλ��Ϊ0
//���û�оͷ���-1

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
