//此程序每秒更新一次时间

#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time timeUpdate(struct time now);
    struct time currentTime, nextTime;

    printf("Enter the time(hh:mm:ss): ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds );

    nextTime = timeUpdate(currentTime);

    printf("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);

    return 0;
}

//此函数每秒更新一次时间

struct time timeUpdate(struct time now)
{
    ++now.seconds;

    if(now.seconds == 60){       //下一分钟
        now.seconds = 0;
        ++now.minutes;

        if(now.minutes == 60){     //下一分钟
            now.minutes = 0;
            ++now.hour;

            if(now.hour == 24)     //午夜
                now.hour = 0;
        }
    }

    return now;
}
