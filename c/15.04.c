//����ϲ������ļ��е��У��������д��stdiout��

#include <stdio.h>

int main(void)
{
    FILE *frist, *second;
    char friName[64], secName[64];
    char c1[100], c2[100];
    char *c1ptr = c1, *c2ptr = c2;
    int c, d, n =1;

    //����Ҫ��ȡ���ļ���

    printf("Enter name of  freist file : ");
    scanf("%63s", friName);
    printf("Enter name of second file: ");
    scanf("%63s", secName);

    //��Ҫ���ж�ȡ���ļ�

    if( (frist = fopen(friName, "r")) == NULL){
        fprintf(stderr, "The first file %s can't read.\n", friName);
        return 1;
    }
    if((second = fopen(secName, "r")) == NULL){
        fprintf(stderr, "The second file %s can't read.\n", secName);
        return 2;
    }


    //��ʼ�������
    while(((c = getc(frist))!= EOF) && ((d = getc(second))!= EOF)){
        do{
            putchar(c);
            printf("1");
        }while(c == '\n');
        do{
            putchar(d);
        }while(d == '\n');

    }

    fprintf( stdout, "That's over");
    return 0;
}
