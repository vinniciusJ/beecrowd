#include <stdio.h>

int main(){
    int distance = 0;
    double spentFuel = 0.0, distancePerLiter = 0.0;

    scanf("%d %lf", &distance, &spentFuel);

    distancePerLiter = distance / spentFuel;

    printf("%.3lf km/l\n", distancePerLiter);

    return 0;
}