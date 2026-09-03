//program to add using increament operator
#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a;
    for(int i=0;i<b;i++){
        sum++;
    }
    printf("Sum of %d and %d is: %d",a,b,sum);
    return 0;
}