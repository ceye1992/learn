//此程序将一个正整数转换成另一个基数
#include <stdio.h>

int main(void)
{
    const char baseDigits[16] = {
        '0', '1', '2', '3','4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int      convertedNumber[64];
    long int numberToConvert;
    int      nextDigit, base, index = 0;

    //取数字和基数

    printf("Number to be converted? ");
    scanf("%ld", &numberToConvert);
    printf("Base? ");
    scanf("%i", &base);

    //转换为指定的基数

    do{
        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert = numberToConvert / base;
    }
    while(numberToConvert != 0);

    //以倒序显示结果

    printf("Converted number = ");
    for(--index; index >= 0; --index){
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");
    return 0;
}
