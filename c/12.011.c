//运用到ctype.h文件

#include <stdio.h>
#include "ctype.h"

int main(void)
{
    printf("%i", isupper('A'));
    printf("%i", isupper('a'));
    printf("%i\n", isupper(1));

    printf("%i", isalpha('A'));
    printf("%i", isalpha('a'));
    printf("%i\n", isalpha(1));

    printf("%i", isdigit('A'));
    printf("%i", isdigit('a'));
    printf("%i", isdigit(1));

    return 0;
}
