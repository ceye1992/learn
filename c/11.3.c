//�˺���Ϊ��λ���ң� ���ƶ���λ��������һ���޷��ŵ���������
//��Ϊ��������������

#include <stdio.h>

unsigned int shift(unsigned int value , int n)
{
    if(n > 0)  //����
        value <<= n;
    else       //����
        value >>= n;

    return value;
}

int main (void)
{
    unsigned int w1 = 0177777u, w2 = 0444u;
    unsigned int shift(unsigned int value, int n);

    printf("%o\t%o\n", shift(w1, 5), w1 << 5);
    printf("%o\t%o\n", shift(w1, -6), w1 << -6);
    printf("%o\t%o\n", shift(w2, 0), w2 >> 0);
    printf("%i\t%o\n", (shift(w1, -3),3));      //�Ժ������ظ����ã���ʹ��w1��������λ��Ȼ��������λ��λ

    return 0;
}