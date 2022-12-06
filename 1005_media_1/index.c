#include <stdio.h>

#define ST_GRADE_WEIGHT 3.5
#define ND_GRADE_WEIGHT 7.5

int main(){
    double stSchoolGrade = 0.0, ndSchoolGrade = 0.0, average = 0.0;

    scanf("%lf", &stSchoolGrade);
    scanf("%lf", &ndSchoolGrade);

    average = (stSchoolGrade * ST_GRADE_WEIGHT + ndSchoolGrade * ND_GRADE_WEIGHT) / (ST_GRADE_WEIGHT + ND_GRADE_WEIGHT);

    printf("MEDIA = %.5lf\n", average);

    return  0;
}