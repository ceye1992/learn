//����һ���꣬����������������Сֵ

#define MIN(a, b) ( ( (a) < (b) )? (a) : (b) )//�᷵����Сֵ
#define MAX(a, b, c) (( (a) > (b) ) ? (a) : (b) )//�᷵�����ֵ

#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%i %i", &a, &b);

    printf("%i", MIN(a, b));

    return 0;
}
