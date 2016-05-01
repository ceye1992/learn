//演示位运算符

#include <stdio.h>

int main(void)
{
    unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;

    printf("%o   %o   %o\n", w1, w2, w3);
    printf("%o   %o   %o\n", ~w1, ~w2, ~w3);
    printf("%o   %o   %o\n", w1^w1, w1 & -w2, w1 | w2 | ~w3);  //按位与的运算符高于按位或
    printf("%o   %o\n", ~(~w1 & ~ w2), ~(~w1 | ~w2)); // ~(~a & ~b) == a | b,  ~( ~a | ~b) = a & b

    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;
    printf(" w1 = %o,  w2 = %o", w1, w2);

    return 0;
}
