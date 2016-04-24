/*此程序对以下形式进行求值
  数字 运算符 数字    */
#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    if(operator == '+')
        printf("%.2f", value1 + value2);
    else if(operator == '-')
        printf("%.2f", value1 - value2);
    else if(operator == '*')
        printf("%.2f", value1 * value2);
    else if(operator == '/')
        printf("%.2f", value1 / value2);

    return 0;
}
