#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0, d = 0, difference = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    difference = (a * b) - (c * d);

    printf("DIFERENCA = %d\n", difference);

    return 0;
}