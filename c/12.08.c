//��Ϊ��λ0��9ʱ�򷵻ط�0ֵ

#define IS_DIGIT(x) (((x)>=0 && (x)<= 9) ? 1 : 0)

//��Ϊ�����ַ�ʱ�򣬷��ط�0ֵ

#define IS_SPECIAL(x) ((((x)>=0 && (x)<= 9) || ((x) >= 'a' && (x) <= 'z') || \
                                ((x) >= 'A' && (x) <= 'Z')) ? 0:1)

#include <stdio.h>

int main(void)
{
    printf("%i", IS_DIGIT(4));
    printf("%i", IS_DIGIT('2'));
    printf("%i", IS_SPECIAL('&'));
    printf("%i", IS_SPECIAL('a'));
    printf("%i", IS_SPECIAL(3));

    return 0;
}

