//�ӵ�һ��������ȡָ��λ���������ؽ��

#include <stdio.h>

unsigned int bitpat_get (unsigned int value, int n, int count)
{
    unsigned int result;
    int i;

    if(n < 0 || n > 32 || count < 0 || count + n > 32)  //�����ڵ����
        return 0;

    //�Ȱ�������������λ, ��ΪԼ������λ����ʼ���Ϊ0��������õ��ǿ�ʼ����
    value <<= n;

    //  Ȼ���������ֵ

    result = value >> (32 - count);

    return result;
}
