/*此程序计算一组成绩的平均值并且计算不及格成绩的个数*/

#include <stdio.h>

int main (void)
{
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    int failureCount = 0;
    float average;

    printf("How many grades will you be entering?\n");
    scanf("%i", &numberOfGrades);

    for(i = 1; i <= numberOfGrades; ++i){
            printf("Enter grades #%i: ", i);
            scanf("%i", &grade);

            gradeTotal = gradeTotal + grade;

            if(grade < 65)
                    ++failureCount;
    }

    average = (float) gradeTotal / numberOfGrades;

    printf("\nGrades average = %.2f", average);
    printf("\nNumber of failures = %i", failureCount);

    return 0;

}
