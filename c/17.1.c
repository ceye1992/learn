#include <stdio.h>
#define DEBUG

int process(int i, int j, int k)
{
    return i + j + k;

}

int main(void)
{
    int i, j, k, nread;

    nread = scanf("%d %d %d1", &i, &j, &k);

    #ifdef DEBUG
        fprintf(stderr, "Number of integers read = %i\n", nread);
        fprintf(stderr, "i = %i, j = %i, k = %i", i, j, k);
    #endif // DEBUG

        printf("%i\n", process(i, j, k));

    return 0;

}
