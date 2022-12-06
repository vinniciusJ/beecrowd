#include <stdio.h>

struct Part {
    int code;
    int quantity;
    double unitValue;
};

int main(){
    struct Part stPart, ndPart;
    double stPartTotalValue = 0.0, ndPartTotalValue = 0.0, total = 0.0;

    scanf("%d %d %lf", &stPart.code, &stPart.quantity, &stPart.unitValue);
    scanf("%d %d %lf", &ndPart.code, &ndPart.quantity, &ndPart.unitValue);

    stPartTotalValue = stPart.quantity * stPart.unitValue;
    ndPartTotalValue = ndPart.quantity * ndPart.unitValue;

    total = stPartTotalValue + ndPartTotalValue;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return  0;
}