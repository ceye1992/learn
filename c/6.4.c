//�����޸ĵ��������ɳ���  ��Ҫ�������һ�����ֲ��ܱ���������������������ô����������
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p, i, primes[50], primesIndex = 2;
    bool isprimes;

    primes[0] = 2;  //ȷ������������
    primes[1] = 3;

    for(p = 5; p <= 50; p = p +2){           //�������ܱ�2����������
        isprimes = true;

        for(i = 1; isprimes && p / primes[i] >= primes[i]; ++i)  //�ж��ܷ�С����ƽ����������������
            if(p % primes[i] == 0)
                isprimes = false;

        if(isprimes == true){      //����������
            primes[primesIndex] = p;
            ++primesIndex;
        }
    }

    for(i = 0; i < primesIndex; ++i)
        printf("%i ", primes[i]);

    printf("\n");

    return 0;
}
