//��һ���ļ����Ƶ���һ���ļ��У����ҽ����е�Сд��ĸ���ɴ�д��ĸ

#include <stdio.h>

int main(void)
{
    char inName[64], outName[64];
    FILE *in, *out;
    int   c;

    //���û�����ȡ�ļ���

    printf("Enter name of file to be copied: ");
    scanf("%63s", inName);
    printf("Enter name of output file: ");
    scanf("%63s", outName);

    //������������ļ�
    if((in = fopen(inName, "r")) == NULL){
        printf("Can't open %s for reading.\n", inName);
        return 1;
    }
    if((out = fopen(outName, "w")) == NULL){
        printf("Can't open %s for writing.\n", outName);
        return 2;
    }

    //��in���Ƶ�out��

    while( (c = getc(in)) != EOF){
        if(c >= 'a' && c <= 'z')
           c += 'A' - 'a';
        putc(c, out);
    }

    //�ر������ļ�

    fclose(in);
    fclose(out);

    printf("File has been copied.\n");

    return 0;
}
