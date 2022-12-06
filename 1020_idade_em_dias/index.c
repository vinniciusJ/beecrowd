#include <stdio.h>

struct Date{
    int years;
    int months;
    int days;
};

struct Date castToDate(int days){
    struct Date date;

    date.years = days / 365;
    date.months = (days % 365) / 30;
    date.days = (days % 365) % 30;

    return date;
}

int main(){
    int days = 0;
    struct Date date;

    scanf("%d", &days);

    date = castToDate(days);

    printf("%d ano(s)\n", date.years);
    printf("%d mes(es)\n", date.months);
    printf("%d dia(s)\n", date.days);

    return  0;
}