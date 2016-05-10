//在终端上显示一个文件的内容，一次显示20行

#include <stdio.h>

int main(void)
{
    char inName[64];
    char *in;
    int  line = 1 , c;
    char doorend = 'a';

    //输入文件名
    printf("Enter the name fo file : ");
    scanf("%63s", inName);

    //打开文件
    while( (in = fopen(inName, "r")) == NULL){
        fprintf(stderr, "The %s can't reading!", inName);
        return 1;
    }

    //开始进行输出
    while( doorend != 'q'){
            while( (c = getc(in)) != EOF){
                if( c != '\n')
                    putchar(c);
                else if(c == '\n'){
                    putchar('\n');
                    ++line;
                }
                while(line == 20){
                    printf("Do you want end? ");
                    scanf("%c", &doorend);
                    if(doorend != 'q')
                        line = 1;
                }
            }
    }

    //关闭文件
    fclose(inName);

    return 0;
}
