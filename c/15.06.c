//���ն�����ʾһ���ļ������ݣ�һ����ʾ20��

#include <stdio.h>

int main(void)
{
    char inName[64];
    char *in;
    int  line = 1 , c;
    char doorend = 'a';

    //�����ļ���
    printf("Enter the name fo file : ");
    scanf("%63s", inName);

    //���ļ�
    while( (in = fopen(inName, "r")) == NULL){
        fprintf(stderr, "The %s can't reading!", inName);
        return 1;
    }

    //��ʼ�������
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

    //�ر��ļ�
    fclose(inName);

    return 0;
}
