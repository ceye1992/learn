//����������

#include <stdio.h>

//�ô˺������ն˶����ı���
void readLine(char *cptr)
{
    char character;

    do{
        character = getchar();
        *cptr = character;
        ++cptr;
    }
    while(character != '\n');

    *(cptr-1)  = '\0';
}

int main(void)
{
    int i;
    char line[91];
    char *linePtr = line;
    void readLine(char *cptr);

    for(i = 1; i < 3; ++i)
    {
        readLine(linePtr);
        printf("%s\n\n", line);
    }

    return 0;
}
