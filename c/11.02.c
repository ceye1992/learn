//���жϼ�������������ƻ����߼�����
//�������λΪ0���������������Ƶ�ʱ��һ��������0�����ǵ�����λΪ1��������������1�� �߼�������0

#include <stdio.h>

int main(void)
{
    unsigned w1 =0xF777EE22; //1111 0111 0111 0111 1110 1110 0010 0010
    int w2 =0xF777EE22;

    printf("%o\n", w1);

    w1 = w1 >>1;
    printf("�߼�����Ϊ��%o\n", w1);  //�߼�����
    w2 = w2 >>1;
    printf("�����ʵ�����еĽ����%o", w2); //���һ����Ϊ�߼����ƣ���һ����Ϊ��������



    return 0;
}