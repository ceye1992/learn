#include <stdio.h>

struct date
{
    int years;
    int months;
    int days;
};
int main (void)
{
    struct date daysWantKonw[2];

    printf("Enter the first date(yyyy)(mm)(dd):  \n");
    scanf("%i-%i-%i", &daysWantKonw[0].years, &daysWantKonw[0].months, &daysWantKonw[0].days);

    printf("\nEnter the second date(yyyy)(mm)(dd):  \n");
    scanf("%i-%i-%i", &daysWantKonw[1].years, &daysWantKonw[1].months, &daysWantKonw[1].days);

    printf("%i-%i-%i   ", daysWantKonw[0].years, daysWantKonw[0].months, daysWantKonw[0].days);
    printf("%i-%i-%i\n", daysWantKonw[1].years, daysWantKonw[1].months, daysWantKonw[1].days);



    return 0;
}
