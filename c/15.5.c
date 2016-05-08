//此程序将一个文件复制到另一个文件
//首先有一个copeme中键入了三行文字 This is a text of the file copy program
//that we have just developed using the     foprn, fcolse, getc, and purc, functions'

#include <stdio.h>

int main(void)
{
    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    //从用户出获取文件名
    printf("Enter name of file to be copied: ");
    scanf("%63s", inName);
    printf("Enter name of outcopy file: ");
    scanf("%63s", outName);

    //打开与输入文件

    if( (in = fopen(inName, "r")) == NULL) {
        printf("Can't open %s for reading.\n", inName);
        return 1;
    }

    if( (out = fopen(outName, "w")) == NULL) {
        printf("Can't open %s for writing.\n", outName);
        return 2;
    }

    //将in复制到out中

    while(( c = getc(in)) != EOF)
        putc(c, out);

    //关闭打开的文件

    fclose(in);
    fclose(out);

    printf("File has been copied.\n");

    return 0;
}
