#include <stdio.h>
#include <stdlib.h>

int getBiggerNumber(int a, int b){
    return  (a + b + abs(a - b)) / 2;
}

int main(){
    int a = 0, b = 0, c = 0, bigger;

    scanf("%d %d %d", &a, &b, &c);

    bigger = getBiggerNumber(a, b);
    bigger = getBiggerNumber(bigger, c);

    printf("%d eh o maior\n", bigger);

    return 0;
}