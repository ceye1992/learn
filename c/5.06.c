//��ȡ�����ĸ�����λ������ʾ��Ӣ��

#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("Give me a number\n");
    scanf("%i", &number1);

/*    while(number1 != 0)   //���������������
    {
        number2 = number1 % 10;
        number1 = number1 / 10;

    }               */

    if(number1 == 0)          //������0����������һλ��0������
        printf("zero");

    //number1 = (int)num;

    while(number1 != 0)   //����
    {
        number2 = number1 % 10;
        number1 = number1 / 10;
        switch(number2)
        {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }
    }

    return 0;
}
