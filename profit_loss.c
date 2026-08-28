//program to check if it is either profit or loss
#include <stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &cp, &sp);
    if (sp>cp){
        printf("Profit of %d", sp-cp);
    }
    else if (cp>sp){
        printf("Loss of %d", cp-sp);
    }
    else
    {
        printf("No profit or loss");
    }
    return 0;
}