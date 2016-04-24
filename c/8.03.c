//此程序计算两个时间之间的时长

#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct time elapsed_time(struct time time1, struct time time2)
{
    struct time base;

    if(time2.hour == 0)
        time2.hour = 24;

    base.seconds = time2.seconds - time1.seconds;
    if(base.seconds < 0){
        base.seconds += 60;
        time2.seconds -= 1;
    }

    base.minutes = time2.minutes - time1.minutes;
    if(base.minutes < 0){
        base.minutes += 60;
        time2.hour -= 1;
    }

    base.hour = time2.hour - time1.hour;

    return base;
}

int main(void)
{
    struct time time1, time2, base;

    printf("Enter the time1:  ");
    scanf("%i %i %i", &time1.hour, &time1.minutes, &time1.seconds);

    printf("Enter the time2:   ");
    scanf("%i %i %i", &time2.hour, &time2.minutes, &time2.seconds);

    base = elapsed_time(time1, time2);

    printf("%i小时%i分%i秒", base.hour, base.minutes, base.seconds);

    return 0;
}
