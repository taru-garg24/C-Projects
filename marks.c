//PROGRAM TO INPUT THE MARKS SCORED IN 5 SUBJECTS AND FIND THEIR TOTAL AND AVERAGE.
#include <stdio.h>
int main(){
    int marks1, marks2, marks3, marks4, marks5;
    printf("Enter marks obtained in 5 subjects out of 100: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);
    int total_marks=marks1 + marks2 + marks3 + marks4+marks5;
    printf("Total marks obtained out of 500 are: %d", total_marks);
    int avg_marks=total_marks/5;
    printf("\nAverage marks obtained are: %d", avg_marks);
    return 0;
}
