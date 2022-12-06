#include <stdio.h>
#include <math.h>

struct Point{
    double x;
    double y;
};

double getDistanceBetween(struct Point stPoint, struct Point ndPoint){
    return sqrt(pow((ndPoint.x - stPoint.x), 2) + pow((ndPoint.y - stPoint.y), 2));
}

int main(){
    struct Point stPoint, ndPoint;
    double distance = 0.0;

    scanf("%lf %lf", &stPoint.x, &stPoint.y);
    scanf("%lf %lf", &ndPoint.x, &ndPoint.y);

    distance = getDistanceBetween(stPoint, ndPoint);

    printf("%.4lf\n", distance);

    return 0;
}