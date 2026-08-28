//program to check if the entered character is a digit or a character
#include <stdio.h>
int main(){
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("The entered character is a digit.");
    }
    else{
        printf("The entered character is a character.");
    }
    return 0;
}