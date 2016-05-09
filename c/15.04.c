//交替合并两个文件中的行，并将结果写到stdiout中

#include <stdio.h>

int main(void)
{
    FILE *frist, *second;
    char fristName[64], secondName[64];
    char c1, c2;
    int c, d, n =1;

    //输入要读取的文件名

    printf("Enter the frist name of file want to write: ");
    scanf("63%s", fristName);
    printf("Enter the second name of file want to write: ");
    scanf("63%s", secondName);

    //打开要进行读取的文件

    if( (frist = fopen(fristName, "r")) == NULL){
        fprintf(stderr, "The first file %s can't read.\n", fristName);
        return 1;
    }
    if((second = fopen(secondName, "r")) == NULL){
        fprintf(stderr, "The second file %s can't read.\n", secondName);
        return 2;
    }

    //开始进行输出
    while( ((c = getc(frist)) != EOF) && (  (d = getc(second)) != EOF)){
        if( c != '\n' && c != EOF )
            putchar(c);
        if( d != '\n' && c != EOF)
            putchar(d);

    }

    fprintf( stdout, "That's over");
    return 0;
}
