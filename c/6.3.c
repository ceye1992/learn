//�˳�������ǰ15��쳲�������
#include <stdio.h>

int main(void)
{
    int Fiobnacci[15], i;

    Fiobnacci[0] = 0; //����
    Fiobnacci[1] = 1;  //����

    for(i = 2; i < 15; ++i)
        Fiobnacci[i] = Fiobnacci[i-2] + Fiobnacci[i - 1];

    for(i = 0; i <15; ++i)
        printf("%i\n", Fiobnacci[i]);

    return 0;
}
