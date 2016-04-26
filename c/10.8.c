//此程序演示指针与函数的使用

#include <stdio.h>

void text(int *int_point)
{
    *int_point = 100;        //改变指针所引用的数据
}

int main(void)
{
    void text(int *int_point);
    int i = 50, *p = &i;

    printf("Before the call to text i = %i\n", i);

    text(p);
    printf("After the call to the text i = %i\n", i);

    return 0;
}
