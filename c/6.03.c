#include <stdio.h>

int main(void)
{
    int index;

    printf("What number do you want?");
    scanf("%i", &index);

    int ratingCounters[index], i, response;

    for(i = 1; i <=10; ++i)
        ratingCounters[i] = 0;

    printf("Enter your response: \n");

    for(i = 1; i <= index; ++i){
        scanf("%i", &response);
        if(response == 999)
            break;
        else if(response < 1 || response > 10 && response != 999)
            printf("Bad response: %i\n", response);
        else
            ++ratingCounters[response];
    }

    printf("\n\nRating   Number if Response\n");
    printf("------    --------------------\n");

    for(i = 1; i <= 10; ++i)
    printf("%4i%14i\n", i, ratingCounters[i]);

    return 0;
}
