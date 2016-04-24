/*此程序对以下形式的输入进行求值
    值 运算符 值 */

#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Type in your experssion: \n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch(operator)
    {
        case '+':
            printf("%.2f", value1 + value2);
            break;
        case '-':
            printf("%.2f", value1 - value2);
            break;
        case '/':
            if(value2 == '0')
                printf("Division is zero.\n");
            else
                printf("%.2f", value1 / value2);
            break;
        case '*':
            printf("%.2f", value1 * value2);
            break;
        default:
            printf("Unkonwn operator.\n");
    }

    return 0;
}
