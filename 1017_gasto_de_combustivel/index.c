#include <stdio.h>

#define AVERAGE_CONSUMPTION 12.0

int main(){
    int travelTime = 0, averageSpeed = 0, distance = 0;
    double absoluteConsumption = 0.0;

    scanf("%d %d", &travelTime, &averageSpeed);

    distance = travelTime * averageSpeed;
    absoluteConsumption = distance / AVERAGE_CONSUMPTION;

    printf("%.3lf\n", absoluteConsumption);

    return 0;
}