//�˳�����ʾָ���뺯����ʹ��

#include <stdio.h>

void text(int *int_point)
{
    *int_point = 100;        //�ı�ָ�������õ�����
}

int main(void)
{
    void text(int *int_point);
    int i = 50, *p = &i;

    printf("Before the call to text i = %i\n", i);

    text(p);
    printf("After the call to the text i = %i\n", i);

    return 0;
}
