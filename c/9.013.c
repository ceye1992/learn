//���ַ����е�Сд�ַ�ת���ɴ�д�ַ��� ���õ���ASCII�����в�ͬ�ַ���˳��
//�������ù�����ķ�����

#include <stdio.h>

void uppercase(char string[])
{
    int i= 0;
    char upper = 'A' - 'a';

    for(i; string[i] != '\0'; ++i)
        string[i] = string[i] + upper;

}

int main(void)
{
    void uppercase(char string[]);
    char s1[] = "abcdefghijk\n";

    printf("%s", s1);

    uppercase(s1);
    printf("%s", s1);

    return 0;
}

