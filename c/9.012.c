//��һ���ַ���ת��Ϊ������

#include <stdio.h>

float strtoFloat(const char string[])
{
    int i, n, intValue, result = 0;
    float floatresult;

    for(i= 0; string[i] != '\0'; ++i)
        if(string[i] == '.')  //��¼С�������ڵ�λ��
           {
               n = i;
            printf("%i\n", n);}
        else         //���ַ���ת��Ϊ����
        {
            intValue = string[i] - '0';
            result = result * 10 + intValue;
            printf("%i\n", result);
        }

        //����С����
        floatresult = result;
        for(n= n + 1; n != i; ++n )
            floatresult /= 10;

        return floatresult;
}

int main (void)
{
    float strtoFloat (const char string[]);

    printf("%f", strtoFloat("12.234"));

    return 0;
}
