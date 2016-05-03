//介绍define语句

#define YES 1
#define NO 0

//此函数判断一个整数是否为偶数

int isEven (int number)
{
    int answer;

    if( number % 2 == 0)
        answer = YES;
    else
        answer = NO;

    return answer;
}

int main(void)
{
    int isEven(int number);

    if( isEven(17) == YES)
        printf("yes  ");
    else
        printf("no  ");

    if(isEven(20) == YES)
        printf("yes  ");
    else
        printf("no  ");

    return 0;
}
