//program to calculate simple interest
#include <stdio.h>
int main(){
    int p,r,t;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &p, &r, &t);
    printf("Simple Interest: %d", (p*r*t)/100);
    return 0;
}