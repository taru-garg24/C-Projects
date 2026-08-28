//PROGRAM TO INPUT MARKS IN 5 SUBJECTS AND CATEGORISE THE STUDENT BASED ON THE GIVEN DIVISIONS. 
#include <stdio.h>
int main() {
    float m1,m2,m3,m4,m5,total,percent;
    printf("enter marks in 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    total=m1+m2+m3+m4+m5;
    percent=total/5;
    if (percent>=60){
        printf("First division");
    }
    else if (percent>=50 && percent<60){
        printf("Second division");
    }
    else if (percent>=40 && percent<50){
        printf("Third division");
    }
    else{
        printf("Fail");
    }
return 0;
}