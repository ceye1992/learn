//����һ����������enum month���͵�ֵΪ����������һ��ָ������·����Ƶ��ַ�����ָ��

#include <stdio.h>

enum month { January = 1, February, March, April, May, June,
            July, August, September, October, November, December};
enum month aMonth;


char *monthName(aMonth)
{
    char *p;

    p = &aMonth;
}

int main(void)
{
    printf("Enter the number: ");
    scanf("%i", &aMonth);

    printf("%s\n", monthName(aMonth));

    return 0;
}
