//此函数为移位喊我， 若移动两位正数，则将一个无符号的整数左移
//若为负数，则将其右移

#include <stdio.h>

unsigned int shift(unsigned int value , int n)
{
    if(n > 0)  //左移
        value <<= n;
    else       //右移
        value >>= n;

    return value;
}

int main (void)
{
    unsigned int w1 = 0177777u, w2 = 0444u;
    unsigned int shift(unsigned int value, int n);

    printf("%o\t%o\n", shift(w1, 5), w1 << 5);
    printf("%o\t%o\n", shift(w1, -6), w1 << -6);
    printf("%o\t%o\n", shift(w2, 0), w2 >> 0);
    printf("%i\t%o\n", (shift(w1, -3),3));      //对函数的重复套用，先使得w1向右移两位，然后结果在座位三位

    return 0;
}
