#include <stdio.h>

#define ST_GRADE_WEIGHT 2
#define ND_GRADE_WEIGHT 3
#define RD_GRADE_WEIGHT 5

int main(){
    double stSchoolGrade = 0.0, ndSchoolGrade = 0.0, rdSchoolGrade = 0.0, average = 0.0, sum  = 0.0;

    scanf("%lf", &stSchoolGrade);
    scanf("%lf", &ndSchoolGrade);
    scanf("%lf", &rdSchoolGrade);

    sum = (stSchoolGrade * ST_GRADE_WEIGHT + ndSchoolGrade * ND_GRADE_WEIGHT + rdSchoolGrade * RD_GRADE_WEIGHT);
    average =  sum / (ST_GRADE_WEIGHT + ND_GRADE_WEIGHT + RD_GRADE_WEIGHT);

    printf("MEDIA = %.1lf\n", average);

    return  0;
}