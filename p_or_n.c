//program to check if a number is negative or positive
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num>=0){
        printf("The number is positive.");
    }
    else{
        printf("The number is negative.");
    }
    return 0;
}