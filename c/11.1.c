//按位与运算符

#include <stdio.h>

int main(void)
{
    unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;  //如果常量字符串最左边为0表示的是八进制常量，u或者U在整数后面表示没有符号

    printf("%o  ", word1 & word2);
    printf("%o  ", word1 & word1);
    printf("%o  ", word1 & word2 & word3);
    printf("%o  ", word1 & 1);

    return 0;
}
