#include <stdio.h>

struct Time{
    int hours;
    int minutes;
    int seconds;
};

struct Time castTimestampToTime(int timestamp){
    int rest = 0;
    struct Time time;

    time.hours = timestamp / (60 * 60); // 1 hour => 60 minutos => 3600
    rest = timestamp % (60 * 60);

    time.minutes = rest / 60;
    rest %= 60;

    time.seconds = rest;

    return time;
}


int main(){
    int timestamp = 0;
    struct Time time;

    scanf("%d", &timestamp);

    time = castTimestampToTime(timestamp);

    printf("%d:%d:%d\n", time.hours, time.minutes, time.seconds);

    return  0;
}