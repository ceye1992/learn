//����ϲ������ļ��е��У��������д��stdiout��

#include <stdio.h>

int main(void)
{
    FILE *frist, *second;
    char fristName[64], secondName[64];
    char c1, c2;
    int c, d, n =1;

    //����Ҫ��ȡ���ļ���

    printf("Enter the frist name of file want to write: ");
    scanf("63%s", fristName);
    printf("Enter the second name of file want to write: ");
    scanf("63%s", secondName);

    //��Ҫ���ж�ȡ���ļ�

    if( (frist = fopen(fristName, "r")) == NULL){
        fprintf(stderr, "The first file %s can't read.\n", fristName);
        return 1;
    }
    if((second = fopen(secondName, "r")) == NULL){
        fprintf(stderr, "The second file %s can't read.\n", secondName);
        return 2;
    }

    //��ʼ�������
    while( ((c = getc(frist)) != EOF) && (  (d = getc(second)) != EOF)){
        if( c != '\n' && c != EOF )
            putchar(c);
        if( d != '\n' && c != EOF)
            putchar(d);

    }

    fprintf( stdout, "That's over");
    return 0;
}
