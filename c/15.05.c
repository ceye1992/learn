//将一个文件每一行的第m至n列写到stdout

#include <stdio.h>

int main(void)
{
    char inName[64];
    int m, n, curcol, c;
    FILE *in;

    //键入要进行输出的文件名字和第n列到m列

    printf("Enter the file name: ");
    scanf("%s", inName);
    printf("Enter the begin and end: ");
    scanf("%i %i", &m, &n);

    //打开文件
    if( (in = fopen(inName, "r")) == NULL){
        fprintf( stderr, "The file %s can't reading.\n", inName);
        return 1;
    }
    else
        curcol = 1;

    while( ( c = getc(in)) != EOF){
        if( c == '\n') {
            putchar('\n');
            curcol = 0;
        }
        else if(curcol >= m && curcol <= n)
            putchar(c);

        ++curcol;
    }

    return 0;
}
