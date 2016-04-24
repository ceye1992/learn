//此程序判断一个数是否为质数，
#include <stdio.h>
#include <stdbool.h>

int prim(int number)
{
    int try_number;
    bool isprim = true;

    if(number != 2){
        for(try_number = 2; try_number < number; try_number++){
            if(number % try_number == 0)
                    isprim = false;
        }
    }

    if(isprim == false){
        printf("这不是一个质数");
        return 0;
    }
    else{
        printf("这是一个质数");
        return 1;
    }
}

int main(void)
{
    int number;

    printf("Give me a number:\n");
    scanf("%i", &number);

    prim(number);

    return 0;
}
