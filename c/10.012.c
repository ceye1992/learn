//�ж�һЩ��������Ƿ���Ч

#include <stdio.h>

//����
char *message = "programming in c is fun\n";  //һ��messageָ�룬ָ���ַ�����
char message2[] = "You said it\n";  //һ���ַ�������
char *format = "x = %i\n";  //һ��ָ�룬
int x = 100;

int main (void)
{
    printf("------��һ��------------\n");
    printf("Programming in c is fun\n");    //ֱ�������ַ���
    printf("%s", "programming in c is fun\n");      //�Ѻ���Ŀ���һ���ַ������飬Ȼ��ǰ������
    printf("%s", message);                  //����ָ���������ֵ
    printf(message);            //ֱ������ָ��


    printf("------�ڶ���-------------\n");
    printf("You said it\n");
    printf("%s", message2);
    printf(message2);               //��������
    printf("%s", &message2[0]);                 //������


    printf("------������--------------\n");
    printf("said it \n");
    printf(message2 + 4);    //�ӵ��ĸ�Ԫ�ؿ�ʼ���
    printf("%s", message2+4);
    printf("%s", &message2[4]);

    printf("-------������-------------\n");
    printf("x = %i\n", x);
    printf(format, x);


    return 0;
}
