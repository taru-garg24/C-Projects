#include <stdio.h>
int main(){
    int x,y;
    printf("enter number 1: ");
    scanf("%d", &x);
    printf("enter number 2: ");
    scanf("%d", &y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping number 1: %d\n",x);
    printf("after swapping number 2: %d\n",y);
}