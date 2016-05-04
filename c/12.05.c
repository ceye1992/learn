//定义一个宏 如果移动量为正数，则将无符号整数左移，若为负，则右移

#define SHIFT(x, n) ( ((n) > 0)? ((x) << (n)) \
                                : ((x) >> (n)))

int main(void)
{
    unsigned int w1 = 0177777u;

    printf("%o", SHIFT(w1, 5));

    return 0;
}
