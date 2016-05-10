//交替合并两个文件中的行，并将结果写到stdiout中

#include <stdio.h>

int main(void)
{
    FILE *frist, *second;
    char friName[64], secName[64];
    char c1[100], c2[100];
    char *c1ptr = c1, *c2ptr = c2;
    int c, d, n =1;

    //输入要读取的文件名

    printf("Enter name of  freist file : ");
    scanf("%63s", friName);
    printf("Enter name of second file: ");
    scanf("%63s", secName);

    //打开要进行读取的文件

    if( (frist = fopen(friName, "r")) == NULL){
        fprintf(stderr, "The first file %s can't read.\n", friName);
        return 1;
    }
    if((second = fopen(secName, "r")) == NULL){
        fprintf(stderr, "The second file %s can't read.\n", secName);
        return 2;
    }


    //开始进行输出
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
