//��λ�������

#include <stdio.h>

int main(void)
{
    unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;  //��������ַ��������Ϊ0��ʾ���ǰ˽��Ƴ�����u����U�����������ʾû�з���

    printf("%o  ", word1 & word2);
    printf("%o  ", word1 & word1);
    printf("%o  ", word1 & word2 & word3);
    printf("%o  ", word1 & 1);

    return 0;
}