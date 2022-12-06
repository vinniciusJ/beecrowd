#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateSphereArea(double radius){
    return (4.0/3.0) * PI * pow(radius, 3);
}

int main(){
    double radius = 0.0, sphereArea = 0.0;

    scanf("%lf", &radius);

    sphereArea = calculateSphereArea(radius);

    printf("VOLUME = %.3lf", sphereArea);

    return 0;
}