//��һ���ļ�ÿһ�еĵ�m��n��д��stdout

#include <stdio.h>

int main(void)
{
    char inName[64];
    int m, n, curcol, c;
    FILE *in;

    //����Ҫ����������ļ����ֺ͵�n�е�m��

    printf("Enter the file name: ");
    scanf("%s", inName);
    printf("Enter the begin and end: ");
    scanf("%i %i", &m, &n);

    //���ļ�
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
