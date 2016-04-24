//计算两个日期的天数

#include <stdio.h>

struct date
{
    int years;
    int months;
    int days;
};

int f (int years, int months)
{
    if(months <= 2)
        years -= 1;

    return years;
}

int g (int month)
{

    if(month <= 2)
        month = month + 13;
    else
        month += 1;

    return month;
}

int days_of_two_date(struct date daysWantKonw[])  //计算两个日期之间的天数
{
    int f (int years, int months), g (int months);
    int day, i;
    int number[2];

    for(i = 0; i < 2; ++i){
        number[i] = 1461 * f(daysWantKonw[i].years, daysWantKonw[i].months) / 4 + 153 * g(daysWantKonw[i].months) / 5 + daysWantKonw[i].days;

        if(1880 < daysWantKonw[i].years < 1990 || (daysWantKonw[i].years == 1880 && (daysWantKonw[i].months > 3 )) ||  //判断是否在1800年3月一日到1900年2月28日之间
            (daysWantKonw[i].years == 1900 && daysWantKonw[i].months < 3) )
           number[i] += 1;

        else if(1700 < daysWantKonw[i].years < 1800 || (daysWantKonw[i].years == 1700 && (daysWantKonw[i].months > 3 )) ||  //判断是否在1700年3月一日到1800年2月28日之间
            (daysWantKonw[i].years == 1800 && daysWantKonw[i].months < 3) )
           number[i] += 2;
    }

    day = number[0] - number[1];

    if( day < 0)
        day = -day;

    return day;
}

int main (void)
{
    struct date daysWantKonw[2];
    int day;

    printf("Enter the first date(yyyy)(mm)(dd):  \n");
    scanf("%i-%i-%i", &daysWantKonw[0].years, &daysWantKonw[0].months, &daysWantKonw[0].days);

    printf("\nEnter the second date(yyyy)(mm)(dd):  \n");
    scanf("%i-%i-%i", &daysWantKonw[1].years, &daysWantKonw[1].months, &daysWantKonw[1].days);

    printf("%i-%i-%i   ", daysWantKonw[0].years, daysWantKonw[0].months, daysWantKonw[0].days);
    printf("%i-%i-%i\n", daysWantKonw[1].years, daysWantKonw[1].months, daysWantKonw[1].days);


    day = days_of_two_date(daysWantKonw);

    printf("The days is %i", day);

    return 0;
}
