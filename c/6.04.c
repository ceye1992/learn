//����һ�������еĸ���ֵ��ƽ��ֵ
#include <stdio.h>

int main(void)
{
    float floa[10];
    int i;
    float ans = 0;

    printf("Give me number: ");

    for(i = 0; i < 10; ++i)
        scanf("%f", &floa[i]);

    for(i = 0; i < 10; ++i)
        ans += floa[i];

    printf("The answer is %.3f", ans / 10);

    return 0;
}
