//��һ���ַ���Ϊ��ĸ�ַ�ʱ�� ����һ����0ֵ

#define IS_ALPHABETIC(x) (((x) >= 'a' && (x) <= 'z') || \
                                ((x) >= 'A' && (x) <= 'Z') ? 1 : 0 )

#include <stdio.h>

int main(void)
{
    printf("%i", IS_ALPHABETIC('A'));
    printf("%i", IS_ALPHABETIC('a'));
    printf("%i", IS_ALPHABETIC(22));

    return 0;
}
