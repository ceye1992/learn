//�˳��������С������

#include <stdio.h>
    int u, v;
//�˳��������С��Լ��
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
//����С������
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
