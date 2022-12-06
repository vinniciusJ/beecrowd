#include <stdio.h>

int main(){
    int stNumber = 0, ndNumber = 0, result = 0;

    scanf("%d", &stNumber);
    scanf("%d", &ndNumber);

    result = stNumber * ndNumber;

    printf("PROD = %d\n", result);

    return 0;
}