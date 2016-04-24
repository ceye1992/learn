//初始化数组
#include <stdio.h>

int main(void)
{
    int arrgy_values[10] = {0, 1, 4, 9 ,16};
    int i;

    for(i = 5; i < 10; ++i)
        arrgy_values[i] = i *i;

    for(i = 1; i < 10; ++i)
        printf("arrgy_value[%i] = %i\n", i, arrgy_values[i]);

    return 0;
}
