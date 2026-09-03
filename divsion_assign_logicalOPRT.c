//program to categorixe based on percentage to different divisions using logical operators
#include <stdio.h>
int main() {
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 60) {
        printf("first divison");
    }
    else if (percentage>=50 && percentage <60){
        printf("second divison");
    }
    else if (percentage>=40 && percentage <50){
        printf("third divison");
    }
    else{
        printf("fail");
    }
    return 0;
}