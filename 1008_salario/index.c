#include <stdio.h>

int main(){
    int employeeNumber = 0, workedHours = 0;
    double valueByWorkedHour = 0.0, salary = 0.0;

    scanf("%d %d %lf", &employeeNumber, &workedHours, &valueByWorkedHour);

    salary = workedHours * valueByWorkedHour;

    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}