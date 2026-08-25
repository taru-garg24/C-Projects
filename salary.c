//PROGRAM TO FIND THE GROSS SALARY
#include <stdio.h>
int main(){
    float salary, gross;
    printf("enter your basic salary: ");
    scanf("%f", &salary);
    gross = (salary*0.4)+(salary*0.2);
    printf("your gross salary is: %f", gross);
    return 0;
}
