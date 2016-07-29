//定义一个函数，以enum month类型的值为参数，返回一个指向包含月份名称的字符串的指针

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
