//�˳����ж�һ�����Ƿ�Ϊ������
#include <stdio.h>
#include <stdbool.h>

int gnumber;

int prim(void)
{
    int try_number;
    bool isprim = true;

    if(gnumber != 2){
        for(try_number = 2; try_number < gnumber; try_number++){
            if(gnumber % try_number == 0)
                    isprim = false;
        }
    }

    if(isprim == false){
        printf("�ⲻ��һ������");
        return 0;
    }
    else{
        printf("����һ������");
        return 1;
    }
}

int main(void)
{


    printf("Give me a number:\n");
    scanf("%i", &gnumber);

    prim();

    return 0;
}
