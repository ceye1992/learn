//以指向date结构体的指针为参数，并将结构体更新为下一天

#include <stdio.h>
#include <stdbool.h>


struct date
{
    int month;
    int day;
    int year;
};

void dateUpdate(struct date *n)
{
    if(n->day != numberOfDays(n))
        n->day += 1;

    else if(n->month = 12){
        n->day = 1;
        n->month = 1;
        n->year += 1;
    }

    else{
        n->day = 1;
        n->month += 1;
    }

}
//此程序判断是否为闰年
bool LeepYear(struct date *m)
{
    bool leepYearFlag;

    if((m->year % 4 == 0  && m->year % 100 != 0)  || m->year % 400 == 0)
        leepYearFlag = true;
    else
        leepYearFlag = false;

    return leepYearFlag;
}

//此程序计算一个月的天数

int numberOfDays(struct date *d)
{
    int days;
    bool LeepYearFlag(struct date *m);
    const int daysPerMonth[12] =
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(LeepYear(d) && d->month == 2)
        days = 29;
    else
        days = daysPerMonth[d->month - 1];

    return days;
}


int main(void)
{
    struct date today, *theday;

    theday = &today;

    today.month = 5;
    today.day = 1;
    today.year = 2014;

    printf("%i/%i/%i\n", theday->month, theday->day, theday->year);

    dateUpdate(theday);

    printf("%i/%i/%i\n", theday->month, theday->day, theday->year);

    return 0;
}
