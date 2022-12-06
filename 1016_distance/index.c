#include <stdio.h>

#define AVERAGE_SPEED_CAR_X 60
#define AVERAGE_SPEED_CAR_Y 90

int main(){
    int distance = 0, overtakingTime = 0;

    scanf("%d", &distance);

    overtakingTime = (distance * AVERAGE_SPEED_CAR_X) / 30;

    printf("%d minutos\n", overtakingTime);

    return 0;
}