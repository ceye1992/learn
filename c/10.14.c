//�˳���һ���ַ������Ƹ���һ���ַ���

#include <stdio.h>

void copyString(char *to, char *from)
{
    while(*from)  //�����˿��ַ�������ֵ0
        *to++ = *from++;  //��ȡfromָ����ַ��� Ȼ�����from��ʹ��ָ��Դ�ַ����е���һ���ַ�

    *to = '\0';
}

int main(void)
{
    void copyString(char *to, char *from);
    char string1[] = "A string to be copied.\n";
    char string2[50];

    copyString(string2, string1);
    printf("%s", string2);

    copyString(string2, "So is this");
    printf("%s", string2);

    return 0;
}
