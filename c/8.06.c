//此程序计算明天的日期

#include <stdio.h>
#include <stdbool.h>

struct date
{
    int month;
    int day;
    int year;
};

//此函数计算明天的日期
struct date dateUpdate(struct date today)
{
    struct date tomorrow;
    int numberOfDays(struct date d);

    if (today.day != numberOfDays(today))
        tomorrow = (struct date) {today.month, today.day + 1, today.year };

    else if(today.month == 12)//年末
        tomorrow = (struct date) {1, 1, today.year+1};

    else                       // 月末
        tomorrow = (struct date) {today.month + 1, 1, today.year};

    return tomorrow;
}
//此函数计算一个月中的天数
int numberOfDays(struct date d)
{
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] =
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(isLeapYear(d) && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}
//此函数判断是否为闰年
bool isLeapYear(struct date d)
{
    bool leapYearFlag;

    if( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}

int main(void)
{
    struct date dateUpdate(struct date todat);
    struct date thisDay, nextDay;

    printf("Enter today's date(mm dd yyyy):  ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("Tomorrow's date is %i/%i/%2i", nextDay.month, nextDay.day, nextDay.year % 100);

    return 0;
}
