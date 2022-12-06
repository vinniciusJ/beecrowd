#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateRightTriangleArea(double base, double height){
    return (base * height) / 2;
}

double calculateCircleArea(double radius){
    return PI * pow(radius, 2);
}

double calculateTrapeziumArea(double bigBase, double smallBase, double height){
    return  (bigBase + smallBase) * height / 2;
}

double calculateSquareArea(double side){
    return pow(side, 2);
}

double calculateRectangleArea(double stSide, double ndSide){
    return stSide * ndSide;
}

int main(){
    double a = 0.0, b = 0.0, c = 0.0;
    double rightTriangleArea = 0.0, circleArea = 0.0, trapeziumArea = 0.0, squareArea = 0.0, rectangleArea = 0.0;

    scanf("%lf %lf %lf", &a, &b, &c);

    rightTriangleArea = calculateRightTriangleArea(a, c);
    circleArea = calculateCircleArea(c);
    trapeziumArea = calculateTrapeziumArea(a, b, c);
    squareArea = calculateSquareArea(b);
    rectangleArea = calculateRectangleArea(a, b);

    printf("TRIANGULO: %.3lf\n", rightTriangleArea);
    printf("CIRCULO: %.3lf\n", circleArea);
    printf("TRAPEZIO: %.3lf\n", trapeziumArea);
    printf("QUADRADO: %.3lf\n", squareArea);
    printf("RETANGULO: %.3lf\n", rectangleArea);

    return 0;
}