//¼òµ¥µÄ¼ÆËãÆ÷

#include <stdio.h>

int main(void)
{
    float num, ans;
    char operator;

    operator = 0;
    ans = 0;

    while(operator != 'e'){
        printf("\nWhat do you want? \n");
        scanf("%f %c", &num, &operator);

        if(operator == 's')
            ans = num;
        else if(operator == '+')
            ans = ans + num;
        else if(operator == '-')
            ans = ans - num;
        else if(operator == '*')
            ans = ans * num;
        else if(operator == '/')
            if(num == 0)
                printf("the division is zero.\n");
            else
                ans = ans / num;
        else if(operator == 'e')
            break;
        else
            printf("wrong\n");

        printf(" = %f", ans);
    }

    return 0;
}
