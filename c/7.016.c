//此程序将一个正整数转换成另一个基数

#include <stdio.h>
#include <stdbool.h>

int       convertedNumber[64];
long int  numberToConvert, whetherEnd;
int       base;
int       digit = 0;

void getNumberAndBase(void)
{
    bool isPrime = false;

    printf("Number to be converted");
    scanf("%li", &numberToConvert);

    whetherEnd = numberToConvert;

    while(isPrime == false){
        printf("base?");
        scanf("%i", &base);

        if(base < 2 || base > 16)
            printf("Bad base - must be between 2 and 16\n");
        else
            isPrime = true;

    }
}

void convertNumber (void)
{
    do{

        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    }
    while( numberToConvert != 0);
}

void displayConvertedNumber (void)
{
    const char baseDigits[16] =
        {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int nextDigit;

    printf("Converted number = ");

    for( --digit; digit >=0; --digit){
        nextDigit = convertedNumber[digit];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");
}

int main(void)
{
    void getNumberAndBase(void), convertNumber(void),
        displayConvertedNumber(void);

    do{
        getNumberAndBase();
        convertNumber();
        displayConvertedNumber();
    }
    while(whetherEnd != 0);

    return 0;
}
