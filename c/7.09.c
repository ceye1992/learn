//此程序计算最小公倍数

#include <stdio.h>
    int u, v;
//此程序计算最小公约数
int gcd(void)
{
    int temp;

    if( v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }

    return temp;
}
//求最小公倍数
int lcm(void)
{
    int ans;

    ans = u * v / gcd();
    printf("%i", ans);

    return 0;
}

int main(void)
{
    printf("What is u?");
    scanf("%i", &u);
    printf("what is v?");
    scanf("%i", &v);

    lcm();

    return 0;
}
