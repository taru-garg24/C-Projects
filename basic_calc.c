//menu-driven program to input two numbers and perform operations on them
#include <stdio.h>
int main(){
    float a,b, res; int choice;
    printf("enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("\nChoose an operation to perform:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);
    if (choice==1){
        res=a+b;
        printf("Result of addition: %f\n", res);
    }
    else if (choice==2){
        res=a-b;
        printf("Result of subtraction: %f\n", res);
    }
    else if (choice==3){
        res=a*b;
        printf("Result of multiplication: %f\n", res);
    }
    else if (choice==4){
        res=a/b;
        printf("Result of division: %f\n", res);
    }
    else{
        printf("Invalid choice\n");
    }
    return 0;
}