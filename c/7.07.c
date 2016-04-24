//此程序计算一个整数的正整数此幂

#include <stdio.h>

long int x_to_the_n(int x, int n)
{
    long int answer, number;

    if(n == 0)
        answer = 1;
    else{
        answer = 1;
        for(number = 1; number <= n; number++)
            answer *= x;
   }

    return answer;

}

int main(void)
{
    int x, n;

    printf("what number do you want?");
    scanf("%i", &x);
    printf("How much do you want?");
    scanf("%i", &n);

    printf("%li", x_to_the_n(x, n));

    return 0;
}
