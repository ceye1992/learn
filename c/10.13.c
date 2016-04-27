//��һ���ַ������Ƶ���һ���ַ���

#include <stdio.h>

void copyString(char *to, char *from)
{
    for( ; *from != '\0'; ++from, ++to)
        *to = *from;

    *to = '\0';
}

//����ĺ����ȼ���
/*
void copyString(char to[], char from[])
{
    int i;

    for(i = 0; from[i] != '\0'; ++i)
        to[i] = from[i];

    return 0;
}
*/

int main(void)
{
    void copyString(char *to, char *from);
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    copyString(string2, "So is this.");  //�����������ַ�������ʱ��ʵ�����Ǵ��ݵ��Ǹ��ַ�����ָ��
    printf("%s\n", string2);

    return 0;
}
