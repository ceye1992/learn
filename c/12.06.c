//����һ���굱Ϊ��д��ĸʱ������0ֵ

#define IS_UPPER_CASE(x) ( ((x) > 'A' && (x) < 'Z') ? 1 : 0 )

#include <stdio.h>

int main(void)
{
    printf("%i", IS_UPPER_CASE('c'));
    printf("%i", IS_UPPER_CASE('a'));
    printf("%i", IS_UPPER_CASE('F'));

    return 0;
}
